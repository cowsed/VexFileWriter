#!/usr/bin/env bash

name=$(basename $1)

echo "const char * fname = \"$name\";" > include/file.h

xd -dfilebuffer $1 >> include/file.h
