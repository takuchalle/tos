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
FLAGS = -Wall -fno-builtin -nostdlib -MD -g -gdwarf-3 -mthumb

#
# Assembler Compile Flags
#
AFLAGS = $(OPT) $(FLAGS)

#
# C Language Compile Flags
#
CFLAGS = $(OPT) $(FLAGS) -std=c11 -ansi -pedantic $(INCLUDES)

#
# Link Flags
#
LDSCRIPT = ../bsp/$(TARGET_ENV)/link.ld
LDFLAGS = -T $(LDSCRIPT) -Map $(TARGET_MAP) -static -Ttext=$(START_ADDR)

#
# Assembler Sources
#
TEST_ASRCS = crt0.S

#
# C Language Sources
#
KERNEL_CSRCS = start_kernel.c
TEST_CSRCS = main.c vector.o

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
.PHONY: all clean

all: $(TARGET_BIN)

$(TARGET_BIN): $(TARGET_ELF)
	$(OBJCOPY) -O binary $< $@

$(TARGET_ELF): $(KERNEL_OBJS) $(OBJS)
	@echo "#### link : $(@) ####"
	$(LD) $(LDFLAGS) -o $(TARGET_ELF) $(KERNEL_OBJS) $(OBJS)

clean:
	-$(RM) $(TARGET_ELF) $(TARGET_MAP) $(TARGET_BIN)
	-$(RM) $(OBJS)
	-$(RM) $(KERNEL_OBJS)
	-$(RM) $(DEPENDS)

include $(CONFIG_DIR)/rule.mk

ifneq ($(findstring clean,$(MAKECMDGOALS)),clean)
sinclude $(DEPENDS)
endif
