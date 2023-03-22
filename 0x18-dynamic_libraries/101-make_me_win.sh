#!/bin/bash
wget -P /tmp https://github.com/TiehouaSarah/alx-low_level_programming/blob/8746b61d2ef85373ad978561ea1f3530ae0484f7/0x18-dynamic_libraries/omain.so
export LD_PRELOAD=/tmp/omain.so
