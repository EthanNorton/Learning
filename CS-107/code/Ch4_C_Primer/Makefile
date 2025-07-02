# A simple makefile for building a program composed of C source files.
# Refer to CS107 guide to Make for background info on makefiles

PROGRAMS = array \
		   argument_list \
		   c_string_decl \
		   array_offsets \
		   swap \
		   swap2 \
		   rawbytes \
		   fraction \
		   dynamic_memory \
		   personhours \
		   pointer_ex1 \
		   ptrptr_ex \
		   array_ex \
		   array_sizeof \
		   assign_array_to_pointer \
		   pointer_to_array \
		   increment_in_array \
		   ptrptr_mystery \
		   ptr_arith \
		   array_pass_by_ref \
		   dot_product \
		   memcpy_ex \
		   memmove_ex \
		   string_literal_crash \
		   deref_problems \
		   buffer_overflow \
		   deref_problems \
		   pointer_to_array1 \
		   swapwords \
		   swapgeneric

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
