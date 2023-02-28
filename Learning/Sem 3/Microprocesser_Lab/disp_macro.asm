%macro disp 02
 mov rax, 01h
 mov rdi, 01h
 mov rsi, %1
 mov rdx, %2
 sys call
% 
