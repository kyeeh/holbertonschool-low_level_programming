#!/bin/bash

# Compiles using position independing flag to generate an object file
gcc -fpic -c filename.c

# Generates the shared library with object files as input
gcc -shared -o libname.so filename.o

# Compiles the main file to use your library
gcc -c main.c

# Compiles your main file with the lib file you generate a main linked with the shared library
gcc -o main main.o libname.so

# The sahred library should be installed on Linux to be reached by your main file
sudo mv libname.so /usr/lib
sudo ldconfig
