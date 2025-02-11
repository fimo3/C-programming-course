	.file	"zad5-1.c"
	.text
	.globl	_gcd
	.def	_gcd;	.scl	2;	.type	32;	.endef
_gcd:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	jmp	L2
L3:
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
	movl	8(%ebp), %eax
	cltd
	idivl	12(%ebp)
	movl	%edx, 12(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, 8(%ebp)
L2:
	cmpl	$0, 12(%ebp)
	jne	L3
	movl	8(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.globl	_lcm
	.def	_lcm;	.scl	2;	.type	32;	.endef
_lcm:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$8, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	movl	%eax, %ebx
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_gcd
	movl	%eax, %ecx
	movl	%ebx, %eax
	cltd
	idivl	%ecx
	addl	$8, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "lcm from %d and %d is: %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$12, 28(%esp)
	movl	$18, 24(%esp)
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_lcm
	movl	%eax, 20(%esp)
	movl	20(%esp), %eax
	movl	%eax, 12(%esp)
	movl	24(%esp), %eax
	movl	%eax, 8(%esp)
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
