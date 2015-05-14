#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
.SUFFIXES: .o .c .S

.S.o:
	@echo "#### compile : $(<F) ####"
	$(CC) -c $(AFLAGS) $< -o $@ 

.c.o:
	@echo "#### compile : $(<F) ####"
	$(CC) -c $(CFLAGS) $< -o $@ 
