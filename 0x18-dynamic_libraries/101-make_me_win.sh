#!/bin/bash
wget -P /tmp/ https://raw.github.com./kingbygone0/alx-low_level_programming/master/0x18-dynamic_libraries/lib.so
export LD_PRELOAD=/tmp/lib.so
