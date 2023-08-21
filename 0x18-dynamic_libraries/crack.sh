#!/usr/bin/bash
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
gcc -c crack.c -fPIC
gcc -shared -o libcrack.so crack.p -ldl
LD_PRELOAD=$PWD/libcrack.so