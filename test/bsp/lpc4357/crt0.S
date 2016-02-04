//
// Copyright (c) 2016, TAKUYA Ohashi. All rights reserved.
//

	.text
	.balign 4
	.global _Reset_Handler
	.type _Reset_Handler, %function
	.global _start
	.type _start, %function
	
_start:
_Reset_Handler:
	ldr	r0, =0x000000d3
	msr	cpsr, r0
	ldr	sp, =0x06400000

/* BSS Clear*/	
	ldr	r1,	=_bss_start
	ldr	r2,	=_bss_end
	mov	r3,	#0x00
_clear_bss:
	cmp	r1,r2
	strne 	r3,[r1],#+4
	bne 	_clear_bss

//	bl _main
	
	// Infinit Loop
	b	.
