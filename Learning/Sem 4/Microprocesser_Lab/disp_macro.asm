%macro disp 02
 mov rax, 01h
 mov rdi, 01h
 mov rsi, %1
 mov rdx, %2
 syscall
%endmacro

section .data
msg db "inside macro", 0ah,0dh
len equ $-msg



section .bss 

section .text
global _start
_start:

disp msg, len

mov rax,3ch
mov rdi, 00h
syscall
