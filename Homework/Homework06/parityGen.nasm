SECTION .data
counter: db		    32			              ; for 32 bits
number:  dd		    12345678			        ; '1234' should produce a '0'  define binary (db)
				                                ; '1235' should produce a '1'  define word (dw)
format0: db		    0xA, 0xA,  '  Parity bit: 0',  0xA, 0xA, 0
format1: db       0xA, 0xA,  '  Parity bit:'0',  0xA, 0xA, 1

	     section .text

_main:
	     push	    ebx

top1:
	     mov		eax,   [number]
	     mov 	  ebx,   0x00000001
	     mov		ecx,   [counter]
	     xor		edx,   edx
	     and		eax,   ebx
	     cmp		eax,   0x00000000
	     jne    count                        ;jump if not equal (jne)

top2:
	     mov		eax    [number]
	     shl		ebx,   1
	     and		eax,   ebx
       cmp		eax,   0x00000000           ; compare (cmp)
	     jne		count
	     dec		ecx
	     cmp		ecx,    0x00000000
	     jne		top2  
	     jmp		result

count:
	     inc		edx
	     dec		ecx
	     cmp		ecx,    0x00000000
	     jne		top2

result:
	     and		edx,    0x00000001
	     cmp		edx,    0x00000001
	     jne		print1

print0:
	     push		format0
	     call		_printf
	     pop		ebx
	     ret					       ;done

print1:
	     push		format1
	     call		_printf
	     pop		ebx
	     ret					       ;done
