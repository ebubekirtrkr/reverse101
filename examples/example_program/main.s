	.file	"main.c"
	.intel_syntax noprefix
	.text
	.globl	main
	.type	main, @function
main:
	endbr64
	push	rbp
	mov	rbp, rsp
	sub	rsp, 16
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	DWORD PTR -15[rbp], 1128486209
	mov	WORD PTR -11[rbp], 10
	mov	BYTE PTR -9[rbp], 0
	lea	rax, -15[rbp]
	mov	edx, 7
	mov	rsi, rax
	mov	edi, 1
	call	write@PLT
	mov	edi, 0
	call	exit@PLT
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
