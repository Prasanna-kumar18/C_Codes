	.file	"arr_2d.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "\12Row %d Column %d: %d\0"
	.align 4
LC1:
	.ascii "\12The sum of all elements is %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$1, 16(%esp)
	movl	$6, 20(%esp)
	movl	$5, 24(%esp)
	movl	$2, 28(%esp)
	movl	$8, 32(%esp)
	movl	$7, 36(%esp)
	movl	$3, 40(%esp)
	movl	$4, 44(%esp)
	movl	$9, 48(%esp)
	movl	$0, 52(%esp)
	movl	$0, 60(%esp)
	jmp	L2
L5:
	movl	$0, 56(%esp)
	jmp	L3
L4:
	movl	60(%esp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	56(%esp), %edx
	addl	%edx, %eax
	movl	16(%esp,%eax,4), %eax
	addl	%eax, 52(%esp)
	movl	60(%esp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	56(%esp), %edx
	addl	%edx, %eax
	movl	16(%esp,%eax,4), %eax
	movl	%eax, 12(%esp)
	movl	56(%esp), %eax
	movl	%eax, 8(%esp)
	movl	60(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	addl	$1, 56(%esp)
L3:
	cmpl	$2, 56(%esp)
	jle	L4
	addl	$1, 60(%esp)
L2:
	cmpl	$2, 60(%esp)
	jle	L5
	movl	52(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
