#!/bin/bash
# How to compile a dynamic lib (Long method):
# First, compile the .c files into .o files
gcc -c strings.c -fPIC
gcc -c strns2.c -fPIC
gcc -c strns3.c -fPIC
gcc -c strns4.c -fPIC
# Second, link the .o files into a .so file
gcc -shared -o libdynamic.so strings.o strns2.o strns3.o strns4.o
# Global variable to store the path to the library
export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
# Compile a c file (with main function) to an executable
gcc -Wall -pedantic -Werror -Wextra -L. main.c -ldynamic -o len