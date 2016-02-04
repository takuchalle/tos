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
PROJECT=tos_test
TARGET_BIN=$(PROJECT).bin
TARGET_ELF=$(PROJECT).elf
TARGET_MAP=$(PROJECT).map

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
# Link Flags
#
LDSCRIPT = ../bsp/$(TARGET_ENV)/link.ld
LDFLAGS = -T $(LDSCRIPT)

#
# Assembler Sources
#
TEST_ASRCS = crt0.S

#
# C Language Sources
#
KERNEL_CSRCS = start_kernel.c
TEST_CSRCS = main.c

#
# Object Files
#
OBJS = $(TEST_ASRCS:.S=.o) $(TEST_CSRCS:.c=.o)
KERNEL_OBJS = $(KERNEL_CSRCS:.c=.o)

#
# Depend Files
#
DEPENDS = $(OBJS:.o=.d) $(KERNEL_OBJS:.o=.d)

VPATH = $(TESTDIR)/src $(TESTDIR)/bsp/$(TARGET_ENV) $(TOPDIR)/kernel

#
# Make Rules
#
.PHONY: all clean kernel

all: $(TARGET_BIN)

$(TARGET_BIN): $(TARGET_ELF)

$(TARGET_ELF): kernel $(OBJS)
#	$(LD) $(LDFLAGS) -o $(TARGET_ELF) $(KERNEL_OBJS) $(OBJS)

kernel : $(KERNEL_OBJS)

clean:
	-$(RM) $(OBJS)
	-$(RM) $(KERNEL_OBJS)
	-$(RM) $(DEPENDS)

include $(CONFIG_DIR)/rule.mk
ifneq ($(findstring clean,$(MAKECMDGOALS)),clean)
sinclude $(DEPENDS)
endif
