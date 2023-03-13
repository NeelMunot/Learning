%macro disp 02
 mov rax, 01h
 mov rdi, 01h
 mov rsi, %1
 mov rdx, %2
 syscall
%endmacro

section .data

section .bss
num1 resb 2

section .text 
global _start
_start:
mov rax,00h
mov rdi,00h
mov rsi, num1
mov rdx, 02
syscall

disp num1, 02

mov rax,3ch
mov rdi,00h
syscall
