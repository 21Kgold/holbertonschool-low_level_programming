#!/bin/bash
gcc -std=gnu89 -c -Wall -Werror -fpic *.c
gcc -shared -o liball.so *.o
