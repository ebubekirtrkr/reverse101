# https://ftp.gnu.org/old-gnu/Manuals/gas-2.9.1/html_chapter/as_7.html
.global _start
_start:
.intel_syntax noprefix
    mov rdi, 1
    lea rsi, [rip+aucc]
    mov rdx, 5
    mov rax, 1          # write(1, aucc, 5)
    syscall
    mov rax, 60
    syscall              # exit()

aucc:
.string "AUCC\n"
