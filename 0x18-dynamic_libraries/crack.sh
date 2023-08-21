#!/usr/bin/bash
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
gcc -shared -o crack.so -fPIC crack.c -ldl
LD_PRELOAD=$PWD/crack.so ./gm