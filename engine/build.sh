#!/bin/bash
# Build script for engine
set echo on

mkdir -p ../bin

# Get a list of all C files.
cFilenames=$(find . -type f -name "*.c")

#echo "Files: " $cFilenames

assembly="engine"
compilerFlags="-g -shared -fdeclspec -fPIC"
# -fms-extensions
# -Wall -Werror
includeFlags="-Isrc -I$VULKAN_SDK/include"
linkerFlags="-lvulkan -lxcb -lx11 -lx11-xcb -lxkbcommon -L$VULKAN_SDK/lib -L/usr/X11R6/lib"
defines="-D_DEBUG -DKEXPORT"

echo "Building $assembly..."
clang $cFileneames $compilerFlags -o ../bin/lib$assembly.so $defines $includesFlags $linkerFlags
