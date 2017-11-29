; imprime uma dword em hexadecimal (8 caracteres)
; opcionalmente com um caractere de nova linha na frente
proc print_hex uses eax ebx ecx edx edi, num, arq, novalinha
local txt[9]:BYTE
  mov edx, [num]
  lea ebx, [.hex_chars]
  mov ecx, 8
  lea edi, [txt]
  xor eax, eax
  cld

  .pra_cada_nibble:
    rol edx, 4
    mov al, dl
    and al, 0fh
    xlatb
    stosb
  loop .pra_cada_nibble
  mov [txt+8], 10

  mov ebx, [arq]
  lea ecx, [txt]
  test dword [novalinha], 1
  jz .sem_novalinha

  .novalinha:
  mov edx, 9
  jmp .pronto
  .sem_novalinha:
  mov edx, 8

  .pronto:
  mov eax, sys_write
  int 80h
  ret

  .hex_chars db '0123456789ABCDEF'
endp

; imprime um texto terminado com 0
proc print_z uses eax ebx ecx edx edi, txt, arq
  mov edi, [txt]
  mov al, 0
  mov ecx, 65535
  repne scasb
  neg ecx
  add ecx, 65535
  dec ecx
  mov edx, ecx

  mov eax, sys_write
  mov ebx, [arq]
  mov ecx, [txt]
  int 80h
  ret
endp

; imprime um texto no formato pascal
; use a estrutura declarada abaixo...
proc print uses eax ebx ecx edx, txt, arq
  mov eax, sys_write
  mov ebx, [arq]
  mov ecx, [txt]
  movzx edx, word [ecx]
  add ecx, 2
  int 80h
  ret
endp

; lê de um arquivo ou da entrada do terminal...
proc read uses ebx ecx edx, buf, arq, bytes
  mov eax, sys_read
  mov ebx, [arq]
  mov ecx, [buf]
  mov edx, [bytes]
  int 80h
  ret
endp

; formato de texto pascal
struc texto txt* {
  local .1, .2
  dw .2-.1
  .1 db txt
  .2:
}
