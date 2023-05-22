#!/bin/bash
wget -P /tmp https://raw.github.com/0marSalah/alx-low_level_programming/main/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
