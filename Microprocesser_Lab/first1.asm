section .data
msg db "hello cazy", 0ah,0dh
len equ $-msg

section .bss

section .text 
global _start
_start:

mov rax,01h
mov rdi, 01h
mov rsi, msg
mov rdx, len
syscall

mov rax, 3ch
mov rdi, 00h
syscall
