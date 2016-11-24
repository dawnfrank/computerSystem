	.file	"2_75_1.c"
	.text
	.globl	signed_high_prod
	.def	signed_high_prod;	.scl	2;	.type	32;	.endef
	.seh_proc	signed_high_prod
signed_high_prod:
	.seh_endprologue
	movl	%ecx, %eax
	imul	%edx
	movl	%edx, %eax
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 5.1.0"
