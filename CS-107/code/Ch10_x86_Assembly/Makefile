# A simple makefile for building a program composed of C source files.
# Refer to CS107 guide to Make for background info on makefiles

PROGRAMS = simpleasm div_example loopjumps whileloop1 forloop1 run_time_stack localstack stackargs

all:: $(PROGRAMS) octmult conditionalmov

CC = gcc
CFLAGS = -g -Og -std=gnu99 -Wall $$warnflags
export warnflags = -Wfloat-equal -Wtype-limits -Wpointer-arith -Wlogical-op -Wshadow -fno-diagnostics-show-option

# for clang on a Mac, -Wlogical-op does not exist
UNAME := $(shell uname)
ifeq ($(UNAME), Darwin)
    export warnflags = -Wfloat-equal -Wtype-limits -Wpointer-arith -Wshadow -fno-diagnostics-show-option
octmult: octmult.c multiply64.s
	$(CC) $(CFLAGS)  octmult.c -x assembler multiply64_macos.s $(LDFLAGS) $(LDLIBS) -o $@
else
octmult: octmult.c multiply64.s
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) octmult.c -x assembler multiply64.s  -o $@
endif

conditionalmov: %:%.c
	$(CC) -g -O3 -std=gnu99 -Wall $$warnflags $(LDFLAGS) $^ $(LDLIBS) -o $@

LDFLAGS =
LDLIBS =


$(PROGRAMS): %:%.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@

clean::
	rm -f $(PROGRAMS) octmult conditionalmov *.o *~
	rm -rf *.dSYM


.PHONY: clean all
