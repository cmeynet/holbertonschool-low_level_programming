section .data
message db "Hello, world!", 10, 0  ; String followed by a new line

section .text
    global main ; Make the 'main' function accessible by the linker
    extern printf  ; Declare printf (provided by libc)

main:
    sub rsp, 8     ; The stack must be 16-byte aligned (RSP must be a multiple of 16)
    mov rdi, message ; Put the message address in RDI
    call printf
    add rsp, 8     ; Restore RSP
    ret  ; Return to the caller (here, libc, which manages the execution of the program)

section .note.GNU-stack noalloc noexec nowrite progbits ; Disable the executable stack for security
