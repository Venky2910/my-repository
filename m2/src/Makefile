#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = MSP432
PLATFORM = HOST

# Architectures Specific Flags
LINKER_FILE =msp432p401r.lds 
CPU = cortex-m4
ARCH = armv7e-m
SPECS = nosys.specs
FPU = fpv4-sp-d16
OUTPUT = c1m2
# Compiler Flags and Defines
ifeq ($(PLATFORM),HOST)
CC =gcc
LD =ld
TARGET =$(OUTPUT).out
LDFLAGS = -O0 -Xlinker -Map=$(OUTPUT).map $(INCLUDES)
CFLAGS =-g -Wall -Werror -std=c99 -DHOST
SRCS =$(SOURCES)
endif
ifeq ($(PLATFORM),MSP432)
CC = arm-none-eabi-gcc
LD = ld
TARGET =$(OUTPUT).out
LDFLAGS = -O0 $(INCLUDES) -T$(LINKER_FILE) -Xlinker -Map=$(OUTPUT).map 
CFLAGS = -mcpu=$(CPU)\
	 -mthumb\
	 -march=$(ARCH)\
	 -mfpu=$(FPU)\
	 --specs=$(SPECS)\
	 -g\
	 -Wall\
	 -Werror\
	 -std=c99\
	 -DMSP432
SRCS = $(SOURCES)
endif

OBJS = $(SRCS:.c=.o)

%.o:%.c
	$(CC) -c $< $(CFLAGS) -o $@

PPFILES = $(SRCS:.c=.i)

%.i:%.c
	$(CC) -E $< $(CFLAGS) -o $@

ASMFILES = $(SRCS:.c=.asm)

%.asm:%.c
	$(CC) -S $< $(CFLAGS) -o $@ 
	objdump -S $@

.PHONY: compile-all
compile-all: $(OBJS)
%.o:%.c
	$(CC) -c $< $(CFLAGS) -o $@

.PHONY: build
build:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@
	size $(OBJS)

.PHONY: clean
clean:
	rm -f $(ASMFILES) $(PPFILES) $(OBJS) $(TARGET) $(OUTPUT).map

