/*
 * Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
 */
#ifndef TOS_MACRO_H_INCLUDED
#define TOS_MACRO_H_INCLUDED

#define ARRAY_COUNT_OF(array) (sizeof(array) / sizeof(array[0]))

#define TOS_MIN(a,b) ((a)<(b)?(a):(b))
#define TOS_MAX(a,b) ((a)>(b)?(a):(b))

#endif /* TOS_MACRO_H_INCLUDED */
