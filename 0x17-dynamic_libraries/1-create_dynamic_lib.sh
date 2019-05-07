#!/bin/bash

# Compiling sources for Holberton
gcc -fpic -c -Wall -pedantic -Werror -Wextra *.c

# Compiling Shared Library for Holberton
gcc -shared -o liball.so *.o
