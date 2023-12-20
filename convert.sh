#!/usr/bin/env bash
xd -dfilebuffer $1 > include/file.h

name=$(basename $1)

echo "const char * fname = \"$name\";" >> include/file.h

