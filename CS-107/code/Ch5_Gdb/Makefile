# A simple makefile for building a program composed of C source files.
# Refer to CS107 guide to Make for background info on makefiles

PROGRAMS = digits_buggy

all:: $(PROGRAMS)

CC = gcc
CFLAGS = -g -O0 -std=gnu99 -Wall $$warnflags
export warnflags = -Wfloat-equal -Wtype-limits -Wpointer-arith -Wlogical-op -Wshadow -fno-diagnostics-show-option

# for clang on a Mac, -Wlogical-op does not exist
UNAME := $(shell uname)
ifeq ($(UNAME), Darwin)
    export warnflags = -Wfloat-equal -Wtype-limits -Wpointer-arith -Wshadow -fno-diagnostics-show-option
endif

LDFLAGS =
LDLIBS =

$(PROGRAMS): %:%.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@

clean::
	rm -f $(PROGRAMS) *.o *~
	rm -rf *.dSYM


.PHONY: clean all
