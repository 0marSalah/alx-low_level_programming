#!/bin/bash

# Get the list of all .c files in the current directory
c_files=$(find . -name "*.c")

# Create an object file for each .c file
for c_file in $c_files; do
  gcc -c -fPIC $c_file
done

# Create the dynamic library
gcc -shared -o liball.so *.o
