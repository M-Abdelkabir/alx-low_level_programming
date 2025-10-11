section .data
    ; Define the string to print with null terminator
    message db 'Hello, ALX', 0xA, 0    ; 0xA = newline, 0 = null terminator
    format db '%s', 0                  ; printf format string

section .text
    global main
    extern printf

main:
    ; Function prologue
    push rbp
    mov rbp, rsp
    
    ; Call printf(message)
    ; In x64 Linux, parameters are passed in registers:
    ; rdi = first argument (format string)
    ; rsi = second argument (string to print)
    mov rdi, format    ; First argument: format string
    mov rsi, message   ; Second argument: actual string
    xor rax, rax       ; Clear RAX (0 floating point arguments for varargs)
    call printf
    
    ; Function epilogue  
    mov rsp, rbp
    pop rbp
    
    ; Return 0
    xor eax, eax       ; Return 0
    ret
