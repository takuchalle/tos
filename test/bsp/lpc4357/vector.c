/*
 * Copyright (c) 2016, TAKUYA Ohashi. All rights reserved.
 */

typedef void (*HandlerEntry)(void);

extern void _Reset_Handler(void);

const HandlerEntry handler_table[] __attribute__ ((section (".vector"))) = {
	_Reset_Handler,
};
