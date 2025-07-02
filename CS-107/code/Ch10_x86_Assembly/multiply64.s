# File: multiply64.s
# ---------------
# Demonstrates the 1-operand imul / mul
# instructions with two signed 64-bit multiplicands
# and the result placed into %rdx:%rax

.section .text

	.type	multiply64, @function
	.globl multiply64

# %rdi will hold first multiplicand
# %rsi will hold the second multiplicand 
# %rdx will hold a pointer to an array
# for the little endian 128-bit result
multiply64:
        # store %rdx in %r8 because %rdx will
        # hold the upper bits of the product
        movq %rdx,%r8

        # copy the first multiplicand into %rax
        movq %rdi,%rax

        # perform the multiplication
        mulq %rsi

        # result is now in %rdx:%rax
        # now we copy the result into 
        # the array
        movq %rax,(%r8)
        movq %rdx,8(%r8)
        ret
