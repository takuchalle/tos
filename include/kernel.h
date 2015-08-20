/*
 * Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
 */
#ifndef KERNEL_H_INCLUDED
#define KERNEL_H_INCLUDED

#include "tos_types.h"

typedef enum _kernel_STATE {
	_kernel_STATE_ACTIVE = 0,
	_kernel_STATE_SLEEP,
	_kernel_STATE_IDLE,
	_kernel_STATE_FREE,
	_kernel_STATE_READY,
	_kernel_STATE_NUM
} _kernel_STATE_t;

typedef struct _kernel_TCB {
	_kernel_STATE_t state;
} _kernel_TCB_t;

#endif /* KERNEL_H_INCLUDED */
