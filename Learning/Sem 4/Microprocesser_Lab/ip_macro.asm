%macro disp 02
 mov rax, 01h
 mov rdi, 01h
 mov rsi, %1
 mov rdx, %2
 syscall
%endmacro

%macro inn 02
 mov rax,00h
 mov rdi,00h
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

inn num1,02
disp num1, 02
disp num1, 02
disp num1, 02

mov rax,3ch
mov rdi,00h
syscall
