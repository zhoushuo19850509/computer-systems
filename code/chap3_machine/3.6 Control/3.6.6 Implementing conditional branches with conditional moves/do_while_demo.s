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
	movl	$100, %edi
	callq	_fact_do
	leaq	L_.str(%rip), %rdi
	movq	%rax, %rsi
	xorl	%eax, %eax
	callq	_printf
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_fact_do                        ## -- Begin function fact_do
	.p2align	4, 0x90
_fact_do:                               ## @fact_do
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	cmpq	$2, %rdi
	movl	$2, %edx
	cmovlq	%rdi, %rdx
	movq	%rdi, %rsi
	subq	%rdx, %rsi
	leaq	-1(%rdi), %rcx
	movq	%rcx, %rax
	subq	%rdx, %rax
	mulq	%rsi
	shldq	$63, %rax, %rdx
	imulq	%rsi, %rcx
	addq	%rdi, %rcx
	subq	%rdx, %rcx
	addq	$1, %rcx
	movq	%rcx, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"result: %ld \n"

.subsections_via_symbols
