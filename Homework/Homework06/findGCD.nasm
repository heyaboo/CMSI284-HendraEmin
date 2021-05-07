SECTION .data
        message1:  db "Enter the first number: ", 0
        message2:  db "Enter the second number: ", 0
        formatin:  db "%d", 0
        message:   db "The result is = %d", 10, 0
        formatout: db "%d", 10, 0 ; this is a new line
        integer1:  times 4 db 0 ; 32-bits integer = 4 bytes
        integer2:  times 4 db 0 ;
        gcd        dw 0

SECTION .text
        global         _main
        extern         _scanf
        extern         _printf

_main:
        push           eax                  ; save registers
        push           ebx
        push           message1
        call           _printf

        add            esp, 4               ; remove parameters
        push           integer1             ; address of integer1 (2nd parameter)
        push           formatin
        call           _scanf

        add            esp, 8               ; remove parameters
        push           message2
        call           _printf

        add            esp, 4               ; remove parameters
        push           integer2             ; address of integer2
        push           formatin
        call           _scanf

        add            esp, 8               ; remove parameteres

;
gcd0:
        xor            edx, edx             ; divide
        div            ebx
        mov            eax, ebx
        mov            ebx, edx
        test           ebx, ebx             ; loop if remainder is not equal 0
        jnz            gcd0

;                                           ; ax = gcd

        push           eax
        push           message
        call           _printf
        add esp , 8
        ret
