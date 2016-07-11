/*
 *    __
 *   / /_____  _____
 *  / __/ __ \/ ___/
 * / /_/ /_/ (__  )
 * \__/\____/____/
 *
 * Copyright (c) 2015-2016, TAKUYA Ohashi. All rights reserved.
 */
#ifndef __TASK_H_INCLUDED__
#define __TASK_H_INCLUDED__

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


#endif /* __TASK_H_INCLUDED__ */

