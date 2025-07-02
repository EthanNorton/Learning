# Make all code from all chapters

CHAPTERS = Ch1_Introduction \
           Ch2_Unix_Commandline_gcc_Makefiles \
           Ch3_Numbers \
           Ch4_C_Primer \
           Ch5_Gdb \
           Ch6_Bits_Bytes \
           Ch7_C_String_Library \
           Ch8_C_Low_Level \
           Ch9_IEEE_Floating_Point \
           Ch10_x86_Assembly \
           Ch11_Managing_the_Heap

$all:
	for dir in $(CHAPTERS); do \
		echo "Making $$dir:"; \
        $(MAKE) -C $$dir; \
		echo; \
    done

clean::
	for dir in $(CHAPTERS); do \
		echo "Cleaning $$dir:"; \
        $(MAKE) clean -C $$dir; \
		echo; \
    done

.PHONY: clean all
