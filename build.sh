#!/bin/bash

# Build Tree program
echo "Building Tree program..."
g++ Tree.cpp -o tree_program

# Build Practice program
echo "Building Practice program..."
g++ practice.cpp -o practice_program

# Run both programs
echo "Running Tree program..."
./tree_program

echo "Running Practice program..."
./practice_program

# Cleanup
echo "Cleaning up..."
rm -f tree_program practice_program
echo "Cleanup complete."
