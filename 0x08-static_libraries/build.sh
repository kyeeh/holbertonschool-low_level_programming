#!/bin/bash
gcc -c *.c;
ar -rc libholberton.a *.o;
ranlib libholberton.a
