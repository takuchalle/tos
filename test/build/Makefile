#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
TOPDIR = ../..
TESTDIR = ..
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
# 
#
FLAGS = -Wall -fno-builtin -MD

#
# Assembler Compile Flags
#
AFLAGS = $(OPT) $(FLAGS)

#
# C Language Compile Flags
#
CFLAGS = $(OPT) $(FLAGS) -std=c99 -ansi -pedantic $(INCLUDES)

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

#
# Depend Files
#
DEPENDS = $(OBJS:.o=.d) $(KERNEL_OBJS:.o=.d)

VPATH = $(TESTDIR)/bsp/$(TARGET_ENV) $(TOPDIR)/kernel

all: $(TARGET_BIN)

$(TARGET_BIN): $(TARGET_ELF)

$(TARGET_ELF): kernel $(OBJS)

kernel : $(KERNEL_OBJS)

.PHONY: clean kernel

clean:
	-$(RM) $(OBJS)
	-$(RM) $(KERNEL_OBJS)
	-$(RM) $(DEPENDS)

include $(CONFIG_DIR)/rule.mk

sinclude $(DEPENDS)
