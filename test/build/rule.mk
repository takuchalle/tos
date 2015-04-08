#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
.SUFFIXES:	.S .c .o
%.o:%.S
	$(CC) -c $(AFLAGS) $< -o $@ 

%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@ 
