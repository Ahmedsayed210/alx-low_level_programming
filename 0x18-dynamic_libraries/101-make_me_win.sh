#!/bin/bash
wget -p /tmp http://github.com/Ahmedsayed210/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
