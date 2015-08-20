#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
TOPDIR = ../..
TESTDIR = ../
CONFIG_DIR = $(TESTDIR)/config

include $(CONFIG_DIR)/config.mk
include $(CONFIG_DIR)/tools.mk

#
# Project Infomation
#
PROJECT=tos
TARGET_BIN=$(PROJECT).bin
TARGET_ELF=$(PROJECT).elf

#
# Optimize
#
OPT = -O3

#
# Assembler Compile Flags
#
AFLAGS = $(OPT) -Wall -fno-builtin

#
# C Language Compile Flags
#
CFLAGS = $(OPT) -Wall -fno-builtin -ansi -pedantic $(INCLUDES)

#
# Assembler Sources
#
ASRCS = crt0.S

#
# C Language Sources
#
KERNEL_CSRCS = start_kernel.c

#
# Object Files
#
OBJS = $(ASRCS:.S=.o) $(CSRCS:.c=.o)
KERNEL_OBJS = $(KERNEL_CSRCS:.c=.o)

VPATH = $(TESTDIR)/bsp/$(TARGET_ENV) $(TOPDIR)/kernel

all: $(TARGET_BIN)

$(TARGET_BIN): $(TARGET_ELF)

$(TARGET_ELF): kernel $(OBJS)

kernel : $(KERNEL_OBJS)

.PHONY: clean kernel

clean:
	$(RM) $(OBJS)

include $(CONFIG_DIR)/rule.mk
