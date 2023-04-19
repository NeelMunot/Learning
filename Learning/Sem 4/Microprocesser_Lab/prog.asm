SECTION .DATA
	hello:     db 'Hello world!',10, 0dh
	helloLen:  equ $-hello


section .bss


SECTION .TEXT
	GLOBAL _start 
_start:
	mov rax,1           ; 'write' system call = 4
	mov rdi,1            ; file descriptor 1 = STDOUT
	mov rsi,hello        ; string to write
	mov rdx,helloLen     ; length of string to write
	syscall              ; call the kernel

	; Terminate program
	mov rax,3ch            ; 'exit' system call
	mov rdi,00            ; exit with error code 0
	syscall 
