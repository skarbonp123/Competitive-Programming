#!/bin/bash

# Check if filename is provided
if [ -z "$1" ]; then
    echo "Usage: ./run_cpp.sh <filename.cpp>"
    exit 1
fi

# File without extension

base_name=$(basename "$1" .cpp)
short_name=${base_name:3:3}  # 4th to 6th characters

# Compile with g++, show errors if any
g++ -std=c++17 -O2 -Wall "$1" -o "$short_name.out"
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi

# Run the executable
echo " "
echo "Running $short_name"
echo "--------------------------"
echo "Input:"
"./$short_name.out"

rm "$short_name.out"