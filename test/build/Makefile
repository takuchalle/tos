#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
include config.mk
include tools.mk

TOPDIR = ..

PROJECT=tos
TARGET_BIN=$(TARGET).bin
TARGET_ELF=$(TARGET).elf

OPT = -O2
AFLAGS = $(OPT) -Wall -nostdinc -fno-builtin

ASRCS = crt0.S

OBJS = $(ASRCS:.S=.o)

VPATH = $(TOPDIR)/bsp

all: $(TARGET_BIN)

$(TARGET_BIN): $(TARGET_ELF)

$(TARGET_ELF): $(OBJS)

.PHONY: clean

clean:
	$(RM) $(OBJS)

include rule.mk
