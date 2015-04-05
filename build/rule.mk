#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
.S.o: 
	$(CC) $(AFLAGS) $< -o $@ 

.c.o: 
	$(CC) $(CFLAGS) $< -o $@ 
