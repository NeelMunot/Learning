%macro disp 02
 mov rax, 01h
 mov rdi, 01h
 mov rsi, %1
 mov rdx, %2
 syscall
%endmacro

section .data
msg1 db "The source block is ", 0ah,0dh
len1 equ $-msg1
msg2 db "The destination block is ", 0ah,0dh
len2 equ $-msg2
arr1 db "SE Computer", 0ah,0dh
len3 equ $-arr1
 
section .bss
arr2 resb len3

section .text
global _start
_start:
disp msg1, len1
disp arr1, len3

mov rsi, arr1
mov rdi, arr2
mov rcx, len3

up: 
mov al, [rsi]
mov [rdi], al
inc rsi
inc rdi
dec cx
jnz up

disp msg2, len2
disp arr2, len3

mov rax,3ch
mov rdi, 00h
syscall
