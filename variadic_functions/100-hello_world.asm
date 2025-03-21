bits 64
global main ; Make the 'main' function accessible by the linker

section .data
Hello db "Hello, World", 10 ; String followed by a new line

section .text
main:
    mov rax, 1 ; sys_write
    mov rdi, 1 ; stdout
    mov rsi, Hello
    mov rdx, 13
    syscall

    mov rax, 60 ; sys_exit
    xor rdi, rdi ; exit(0)
    syscall

section .note.GNU-stack noalloc noexec nowrite progbits ; Disable the executable stack for security
