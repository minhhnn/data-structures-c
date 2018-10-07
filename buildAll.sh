#!/bin/bash

SRCDIR='src/main'

echo "Create build and bin directory"

if [ -e bin ]; then
    rm -rf bin
fi

if [ -e build ]; then
    rm -rf build
fi

mkdir bin
mkdir build

# Find all Makefile and execute each of them
for file in $(find $SRCDIR -name "Makefile" -type f); do
    echo $file
    PARENTDIR=$(dirname "$file")
    PARENTNAME=$(basename "$PARENTDIR")
    echo "Building '$PARENTNAME'"
    cd $PARENTDIR
    make
    make clean
done
