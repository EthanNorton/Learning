#!/usr/bin/env python3

startChar = ord('!')
endChar = ord('~')

print("space",'0'+bin(ord(' '))[2:]+'\t',end='')

for i in range(endChar-startChar):
    # special case for space
    print(chr(i+startChar),'0'+bin(i+startChar)[2:],end='')
    if (i+2) % 3 == 0:
        print()
    else:
        print('\t',end='')


