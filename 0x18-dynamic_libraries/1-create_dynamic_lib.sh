#!/bin/bash
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
gcc -shared -o liball.so *.c