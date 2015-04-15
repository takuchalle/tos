#
# Copyright (c) 2015, TAKUYA Ohashi. All rights reserved.
#
TOPDIR = ..
CONFIG_DIR = $(TOPDIR)/config

include $(CONFIG_DIR)/config.mk
include $(CONFIG_DIR)/tools.mk

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

include $(CONFIG_DIR)/rule.mk
