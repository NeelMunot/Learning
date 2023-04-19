%macro disp 2
mov rax,1           	
mov rdi,1            	
mov rsi,%1       
mov rdx,%2     
syscall
%endmacro


%macro inn 2
mov rax,0           	
mov rdi,0            	
mov rsi,%1       
mov rdx,%2     
syscall
%endmacro

section .data
msg1 db "Enter the String", 0ah, 0dh
len1 equ $-msg1

msg2 db "The Length of String is", 0ah, 0dh
len2 equ $-msg2


msg3 db "The String is", 0ah, 0dh
len3 equ $-msg3

msg4 db " ", 0ah, 0dh
len4 equ $-msg4


section .bss

num1 resb 50
num2 resb 3


section .text
global _start
_start:

disp msg1, len1

inn num1,50

dec rax
mov bl, al
mov rsi, num2
mov cx, 0204h

xor rax, rax
mov al,bl
up:
rol al,cl

mov bl,al
and bl, 0fh
cmp bl, 09h
jbe skip
add bl, 07h
skip: add bl,30h
mov [rsi],bl
inc rsi
dec ch
jnz up
disp msg2, len2
disp num2,3

disp msg4, len4

disp msg3, len3

disp num1, 50



mov rax, 60
mov rdi, 00
syscall

