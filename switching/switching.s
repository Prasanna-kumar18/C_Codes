	.file	"switching.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "\12Enter the number from 1-5\0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "The value is 1\0"
LC3:
	.ascii "The value is 2\0"
LC4:
	.ascii "The value is 3\0"
LC5:
	.ascii "The value is 4\0"
LC6:
	.ascii "The value is 5\0"
LC7:
	.ascii "Give value between 1-5\0"
LC8:
	.ascii "\12This is goto print statement\0"
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
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	__imp___iob, %eax
	addl	$32, %eax
	movl	%eax, (%esp)
	call	_fflush
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	28(%esp), %eax
	cmpl	$5, %eax
	ja	L2
	movl	L4(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L4:
	.long	L2
	.long	L3
	.long	L5
	.long	L6
	.long	L7
	.long	L8
	.text
L3:
	movl	$LC2, (%esp)
	call	_printf
	jmp	L9
L5:
	movl	$LC3, (%esp)
	call	_printf
	jmp	L9
L6:
	movl	$LC4, (%esp)
	call	_printf
	jmp	L9
L7:
	movl	$LC5, (%esp)
	call	_printf
	jmp	L9
L8:
	movl	$LC6, (%esp)
	call	_printf
	jmp	L9
L2:
	movl	$LC7, (%esp)
	call	_printf
	nop
L9:
	movl	$LC8, (%esp)
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
	.def	_fflush;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
