	.file	"stringDemo1.c"
	.text
	.section	.rodata
.LC0:
	.string	"hello world"
.LC1:
	.string	"hello  world"
.LC2:
	.string	"hello world\n"
.LC3:
	.string	"helloworld"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rax
	movq	%rax, -32(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, -24(%rbp)
	leaq	.LC2(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	.LC3(%rip), %rax
	movq	%rax, -8(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
