#!/bin/bash
curl -LO $HOME https://github.com/astianmuchui/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libcrack.so
export LD_PRELOAD=$HOME/libcrack.so