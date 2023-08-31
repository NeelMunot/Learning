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
msg1 db "Enter Number 1 : ", 0ah,0dh
len1 equ $-msg1
msg2 db "Enter Number 2 : ", 0ah,0dh
len2 equ $-msg2
msg3 db "The addition of two numbers displayed in hex is : ", 0ah,0dh
len3 equ $-msg3

section .bss
num1 resb 2
num2 resb 2

section .text 
global _start
_start:

disp msg1,len1
inn num1,02
disp msg2,len2
inn num2,02

disp num1,02
disp num2,02

mov rax,3ch
mov rdi,00h
syscall
