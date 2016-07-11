/*
 *    __
 *   / /_____  _____
 *  / __/ __ \/ ___/
 * / /_/ /_/ (__  )
 * \__/\____/____/
 *
 * Copyright (c) 2015-2016, TAKUYA Ohashi. All rights reserved.
 */
#ifndef __TOS_MACRO__H_INCLUDED__
#define __TOS_MACRO__H_INCLUDED__

#define ARRAY_COUNT_OF(array) (sizeof(array) / sizeof(array[0]))

#define TOS_MIN(a,b) ((a)<(b)?(a):(b))
#define TOS_MAX(a,b) ((a)>(b)?(a):(b))

#endif /* __TOS_MACRO__H_INCLUDED__ */
