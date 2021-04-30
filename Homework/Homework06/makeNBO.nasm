SECTION     .DATA

            message1:  db "Enter the number: ", 0
            formatin:  db "%d", 0
            message2:   db "Our Stanley/Penguin computer is a %d", 10, 0
            integer1:  times 4 db 0 ; 32-bits integer = 4 bytes


SECTION     .text
            global         _main
            extern         _scanf
            extern         _printf
            extern         _makeNBOC.h

_main:
            
            push           eax                    ; save registers
            push           message1
            call           _printf

            add            esp, 4                 ; remove parameters
            push           integer1               ; address of integer1
            push           formatin
            call           scanf

            call           _makeNBOC              ; I am not sure if this is the way to call our makeNBOC.h function
            cmp            integer1, _makeNBOC.h  ; using integer1 as argument?
            push           message2               ; print the result
            call           _printf

            mov            ebx, 1
            cmp            ebx, 5                 ; to see if loop count is already 5 times
            jne            _main
            ret                                   ; done
