namespace aax_test_set
include std/math.e

/* AAM-AAD-J[N]?[PS]-based set-selector brutefinder (???) */

-- Resultset fields
enum X, Y, JTYPE

function test_solution (sequence xy, sequence a_set, sequence what_set, sequence words)
   integer found = 1
   for k = 2 to length(a_set) do
      if and_bits(xor_bits(a_set[k], what_set[k]),1) !=
      and_bits(xor_bits(a_set[1], what_set[1]),1) then
         found = 0
         exit
      end if
   end for
   if found then
      if and_bits(xor_bits(a_set[1], what_set[1]),1) then
         xy &= {words[1]}
      else
         xy &= {words[2]}
      end if
      return xy[$]
   end if
   return 0
end function

function find_solutions (sequence bytes, sequence what_set)
   integer al, ah
   sequence p = repeat(0, length(bytes)),
            s = repeat(0, length(bytes)),
            functional_solutions = {}
   object ret
   for x = 1 to 255 do
      for y = 0 to 255 do
         for k = 1 to length(bytes) do
            p[k]  = 0
            al    = remainder(bytes[k], x)
            ah    = floor(bytes[k] / x)
            al    = remainder(al+ah*y, 256)
            ah    = 0
            if al < 0x80 then s[k]=0 else s[k]=1 end if
            while al do
               p[k] += remainder(al,2)
               al = shift_bits(al,1)
            end while
         end for
         ret = test_solution ({x,y}, p, what_set, {"JNP", "JP"})
         if sequence(ret) then
            functional_solutions &= {{x,y,ret}}
         end if
         ret = test_solution ({x,y}, s, what_set, {"JNS", "JS"})
         if sequence(ret) then
            functional_solutions &= {{x,y,ret}}
         end if
      end for
   end for
   return functional_solutions
end function

procedure show_solutions (sequence solutions)
   for a = 1 to length(solutions) do
      printf(1, "X=%d Y=%d using %s\n",
         { solutions[a][X], solutions[a][Y], solutions[a][JTYPE] })
   end for
end procedure

sequence
   input_values = {0x01, 0x03, 0x25, 0x39, 0xB3, 0x78, 0xC4, 0x6B, 0xA6, 0x12, 0xF0},
   resultset = {1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1},
   instructions = find_solutions(input_values, resultset)

show_solutions(instructions)
