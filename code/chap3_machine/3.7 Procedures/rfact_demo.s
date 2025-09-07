	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 1
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$5, %edi
	callq	_rfact
	leaq	L_.str(%rip), %rdi
	movq	%rax, %rsi
	xorl	%eax, %eax
	callq	_printf
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_rfact                          ## -- Begin function rfact
	.p2align	4, 0x90
_rfact:                                 ## @rfact
	.cfi_startproc
## %bb.0:
	movl	$1, %eax
	cmpq	$2, %rdi
	jl	LBB1_2
## %bb.1:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -24
	movq	%rdi, %rbx
	addq	$-1, %rdi
	callq	_rfact
	imulq	%rbx, %rax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
LBB1_2:
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"result: %ld \n"

.subsections_via_symbols
