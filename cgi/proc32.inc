
; Macroinstructions for defining and calling procedures

macro locals {
  local ..locsize
  locsize equ ..locsize
  virtual at ebp - ..locsize - .__info.commonframe.size
  @@:
}


macro endl {
  rb (4 - ($- @b) and 11b) and 11b
  locsize = $ - @b
  if $-@b > maxsize
    maxsize = $-@b
  end if
  end virtual
  restore locsize
}


macro err@endp { }


macro proc2 name, [arg] {
  common
    err@endp

    macro err@endp \{
      end if
      Missing 'endp' before the procedure.
    \}

  if defined options.AlignCode & options.AlignCode
    align 16
  end if

  name:
    .__info.id = 1
    .__info.start = $

    virtual at ebp+8
      if ~ arg eq
        forward
          arg dd ?
          if ~ defined name#arg
            ERROR! the argument `arg MUST begins with dot
          end if
        common
      end if
        .__info.argsize = $-ebp-8
    end virtual

    if ~ used name
      if defined options.ShowSkipped & options.ShowSkipped
        display 1,'Procedure skipped: ',`name, $0d, $0a
      end if
    else

    virtual at ebp - .__info.commonframe.size
    .__info.commonframe.begin:
}


macro doas name1, name2, [arg] {
common
  proc2 name1, arg
}


macro proc name, [arg] {
common
  local ..norm

  define ..norm TRUE

  match pname as iface, name \{
    define ..norm FALSE

    if ~defined interfaces.\#iface
      ERROR! Not defined \`iface interface.
    end if
    match interface, interface@\#iface \\{
      doas pname, interface
    \\}
  \}

  match =TRUE, ..norm \{
    proc2 name, arg
  \}
}


macro begin {
      rb (4 - ($ - .__info.commonframe.begin) and 11b) and 11b
      .__info.commonframe.size = $ - .__info.commonframe.begin
    end virtual

    local ..maxsize
    maxsize equ ..maxsize
    ..maxsize = 0

    if .__info.framesize
      if defined options.FastEnter & options.FastEnter
        push ebp
        mov  ebp, esp
        sub  esp, .__info.framesize
      else
        enter .__info.framesize, 0
      end if
    else
      if .__info.argsize
        push ebp
        mov  ebp, esp
      end if
    end if
}


macro cret {
  if .__info.argsize | .__info.framesize
    if defined options.FastEnter & options.FastEnter
      mov   esp, ebp
      pop   ebp
    else
      leave
    end if
  end if
  retn
}


macro return {
  if .__info.argsize | .__info.framesize
    if defined options.FastEnter & options.FastEnter
      mov   esp, ebp
      pop   ebp
    else
      leave
    end if
  end if

  if .__info.argsize
    retn .__info.argsize
  else
    retn
  end if
}



macro endp {
    .__info.framesize = maxsize + .__info.commonframe.size
    .__info.codesize = $ - .__info.start
  end if
  restore maxsize
  purge err@endp
}


; Defines procedure interface, separate from the procedure body. Useful for
; portable libraries, where the body is an OS dependent, but the interface should not.
; Must be defined prior to the "body" definition.

macro interface name, [arg] {
common
  \interface@#name equ name, arg
  interfaces.#name = 1
}

; Defines procedure body, for already defined interface.

macro body name {
  if ~defined interfaces.#name
    ERROR! Not defined interface for `name procedure.
  end if
  match interface, interface@#name \{ proc interface \}
}


macro event name, [arg] {
common
  name dd ?
  interfaces.#name = 1
  interface@#name equ name
forward
  match var, interface@#name \{ \interface@#name equ var, .#arg \}
}





;*****************************************
; Call macroses
;*****************************************


macro pushx [arg] {
common
  local f1, f2, cnt, sz
  cnt = 0
  sz = 0
  f1 = 1
  f2 equ FALSE
forward
  match any, arg \{
    match `arg, arg \\{ f2 equ TRUE \\}
  \}

  cnt = cnt + 1
  if arg eqtype ''
    virtual at 0
      db arg
      sz = sz + $
    end virtual
  end if

common
  local lbl

  match =txt string, arg \{
    f1 = 0
    lbl text string
    f2 equ FALSE
  \}

  if (sz > 4) | (cnt>1)
    f1 = 0
  end if

  if f1
    pushd arg
  else
    pushd lbl
  end if
  match =TRUE, f2 \{ lbl text arg \}
}




macro stdcall proc, [arg] {    ; call procedure
common
  local ..argsize
  ..argsize = 0
  if ~ arg eq
reverse
    pushx arg
    ..argsize = ..argsize + 4
common
  end if
  if defined options.CheckArguments & options.CheckArguments
    if (defined proc#.__info.argsize) & (proc#.__info.argsize <> ..argsize)
      ERROR! wrong argument count for procedure call.
    end if
  end if

  call proc
}


macro invoke proc,[arg] {   ; invoke procedure (indirect)
common
  if ~ arg eq
reverse
    pushx arg
common
  end if
  call [proc]
}


macro ccall proc,[arg]  {                ; call procedure in C calling convention
common local ..size
   ..size = 0
reverse
   pushx arg
   ..size = ..size+4
common
   call proc
   if defined proc#.__info.argsize
     if proc#.__info.argsize > 0
       add esp, proc#.__info.argsize
     end if
   else
     if ..size > 0
       add esp,..size
     end if
   end if
}


macro cinvoke proc, [arg] {               ; invoke procedure (indirect)
common local ..size
   ..size = 0
   if ~ arg eq
reverse
   pushx arg
   ..size = ..size+4
common
   end if

   call [proc]

   if defined proc#.__info.argsize
     if proc#.__info.argsize > 0
       add esp, proc#.__info.argsize
     end if
   else
     if ..size > 0
       add esp, ..size
     end if
   end if
}

;****************************************
; INT3 break point, when first = second.
;****************************************

macro BreakEq first, second {
  local .lbl
  push  eax
  mov   eax, first
  cmp   eax, second
  pop   eax
  jne   .lbl

  int3

.lbl:
}
