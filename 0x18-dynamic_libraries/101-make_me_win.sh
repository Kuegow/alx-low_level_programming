#!/bin/bash
export LD_PRELOAD=data/preload/gm.so.16.04  ./gm 9 8 10 24 75 9
unset LD_PRELOAD
