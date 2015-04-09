#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
include config.mk
include tools.mk

TOPDIR = ..

#
# Project Infomation
#
PROJECT=tos
TARGET_BIN=$(TARGET).bin
TARGET_ELF=$(TARGET).elf

#
# Optimize
#
OPT = -O2

#
# Assembler Compile Flags
#
AFLAGS = $(OPT) -Wall -nostdinc -fno-builtin

#
# Assembler Sources
#
ASRCS = crt0.S

#
# Object Files
#
OBJS = $(ASRCS:.S=.o)

VPATH = $(TOPDIR)/bsp/$(TARGET_ENV)

all: $(TARGET_BIN)

$(TARGET_BIN): $(TARGET_ELF)

$(TARGET_ELF): $(OBJS)

.PHONY: clean

clean:
	$(RM) $(OBJS)

include rule.mk
