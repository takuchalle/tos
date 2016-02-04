OUTPUT_FORMAT("elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)
MEMORY
{
	RAM(wxai) : ORIGIN = 0x10000000, LENGTH = 0x8000
}
SECTIONS
{
	.text : {
	      *(.vector)
	      *(.text .rodata)
	} > RAM

	.data : { *(.data) } > RAM

	.bss : {
	     _bss_start = .;
	     *(.bss)
	     _bss_end = .;
	} > RAM
	.stack : {
		. = . + 0x1000;
		. = ALIGN(4);
		_stack_top = .;
		. = . + 0x1000;
		. = ALIGN(4);
		_irq_stack_top = .;
	} > RAM
}
