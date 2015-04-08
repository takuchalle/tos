#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
.S.o: 
	$(CC) -c $(AFLAGS) $< -o $@ 

.c.o: 
	$(CC) -c $(CFLAGS) $< -o $@ 
