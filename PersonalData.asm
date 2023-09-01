section .data
  hello: db 9, 'My Personal Data', 9, 10
        db '------------------------------------', 10
        db  'CIT-U ID Number:', 9, '22-2113-710', 10
        db  'Last Name:', 9, 9, 'Repunte', 10
        db  'First Name:', 9, 9, 'Frenz Nicole', 10
        db  'Middle Name:', 9, 9, 'Kee', 10
        db  'Birthday:', 9, 9, '06/07/04', 10
        db  'Email Address:', 9, 9, 'frenzrpnte@gmail.com', 10
        db  'Contact Number:', 9, 9, '+639951899726', 10
        db  'Course & Year:', 9, 9, 'BSCS - 2', 10
        
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