#!/bin/bash
gcc -Wall  -Wextra -pedantic -c -fPIC *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
