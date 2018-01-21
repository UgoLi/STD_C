	.file	"test.c"
	.section	.rodata
.LC0:
	.string	""
	.text
	.globl	doit
	.type	doit, @function
doit:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$.LC0, %edi
	call	perror
	call	getchar
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	doit, .-doit
	.section	.rodata
.LC1:
	.string	"a=%ld\n"
.LC2:
	.string	"%d "
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movq	$0, -16(%rbp)
	movl	$1, -32(%rbp)
	movl	$3, -28(%rbp)
	movl	$4, -24(%rbp)
	movl	$6, -20(%rbp)
	movl	$8, -16(%rbp)
	movl	$24, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, -40(%rbp)
	jmp	.L3
.L7:
	movl	-40(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	$6, %eax
	jg	.L4
	movl	-40(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	$7, %eax
	jle	.L4
	movl	$5, -36(%rbp)
	jmp	.L5
.L6:
	movl	-36(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-36(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %edx
	movslq	%ecx, %rax
	movl	%edx, -32(%rbp,%rax,4)
	subl	$1, -36(%rbp)
.L5:
	movl	-40(%rbp), %eax
	addl	$1, %eax
	cmpl	-36(%rbp), %eax
	jle	.L6
	movl	-40(%rbp), %eax
	addl	$1, %eax
	cltq
	movl	$7, -32(%rbp,%rax,4)
.L4:
	addl	$1, -40(%rbp)
.L3:
	cmpl	$4, -40(%rbp)
	jle	.L7
	movl	$.LC0, %edi
	call	perror
	movl	$0, -40(%rbp)
	jmp	.L8
.L9:
	movl	-40(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -40(%rbp)
.L8:
	cmpl	$5, -40(%rbp)
	jle	.L9
	movl	$10, %edi
	call	putchar
	movl	$doit, %edi
	call	atexit
	call	getchar
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L11
	call	__stack_chk_fail
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
