section .data
  hello:
  db 9, 9, 9, '    Cebu Institute of Technology-University', 10
  db 9, 9, 9, '                We GEAR for Life.', 10
  db 9, 9, 9, '                 CIT Commits to:', 10
  db ' ------------------------------------------------------------------------------------------------', 10
  db '| Guide learners to', 9, '| Empower', 9, 9, ' | Accelerate', 9, 9, '| Respond', 9,  9, ' |', 10
  db '| become', 9, 9,  '| people for', 9, 9, ' | community', 9, 9, '| proactively to a', 9,  ' |', 10
  db '| industry-preferred', 9, '| knowledge', 9, 9, ' | development', 9, 9,  '| fast-changing ', 9, ' |', 10
  db '| and life ready', 9,'| generation and', 9, ' |', 9, 9, 9,  '| world', 9, 9, 9,   ' |', 10
  db '| professionals', 9, 9,  '| creativity', 9, 9,  ' |', 9, 9, 9,  '|', 9, 9, 9, ' |', 10
  db ' ------------------------------------------------------------------------------------------------', 10
  
  
  helloLen: equ $-hello          ; Length of the 'Hello, world!' string
  
section .text
  global_start
  
_start:
  mov eax, 4        ;The system call for write (sys_write)
  mov ebx, 1        ;File descriptor 1 - standard output
  mov ecx,hello     ;Put the offset of hello in ecx
  mov edx,helloLen  ;helloLen is a constant, so we don't need to say
                    ; mov edx,[helloLen] to get its actual value
  int 80h           ;Call the kernel
  mov eax,1         ;The system call for exit (sys_exit)
  mov ebx,0         ;Exit with return "code" of 0 (no error)
  int 80h