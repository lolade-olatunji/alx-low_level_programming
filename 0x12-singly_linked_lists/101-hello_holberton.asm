section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8                 ; Align stack pointer

    lea rdi, [format]          ; Load the format string address into rdi
    lea rsi, [hello]           ; Load the hello string address into rsi
    xor eax, eax               ; Clear eax to indicate no floating-point arguments
    call printf                ; Call the printf function

    add rsp, 8                 ; Restore stack pointer

    mov eax, 0                 ; Set the return value to 0
    ret                        ; Return from the main function
