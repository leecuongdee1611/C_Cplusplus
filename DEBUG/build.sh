#!/bin/bash
echo "Building..."
g++ -g -o test test.cpp
gdb test
