#!/usr/bin/python3
for i in range(25, -1, -1):
    print('{}{}'.format(chr(ord('a') + i) if i % 2 == 0 else chr(ord('A') + i), ''), end='')
