#!/bin/bash

# Check if filename is provided
if [ -z "$1" ]; then
    echo "Usage: ./run_cpp.sh <filename.cpp>"
    exit 1
fi

# File without extension
file="${1%.*}"

# Compile with g++, show errors if any
g++ -std=c++17 -O2 -Wall "$1" -o "$file.out"
if [ $? -ne 0 ]; then
    echo "Compilation failed ❌"
    exit 1
fi

# Run the executable
echo "Running $file.out..."
echo "--------------------------"
"./$file.out"
