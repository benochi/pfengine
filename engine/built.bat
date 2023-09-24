REM build script for engine
@ECHO OFF
SetLocal EnableDelayedExpansion

REM Get a list of all the .c files
Set cFilenames=
FOR /R %%f in (*.c) do (
  SET cFilenames=!cFilenames! %%f
)

REM echo "Files:" %cFilenames%

SET assembly=engine
SET compilerFlags=-g -shared -Wvarargs -Wall -Werror
REM -Wall -Werror
SET includeFlags=-Isrc -I%VULKAN_SDK%/include
SET LinkerFlags=-1user32 -1vulkan-1 -L%VULKAN_SDK%/Lib
SET defines=-D_DEBUG -DKEXPORT -D_CRT_SECURE_NO_WARNINGS

ECHO "Building %assmbly%..."
clang %cFilenames %compilerFlags -o ../bin/%assembly%.dll %defines% %includeFlags% %LinkerFlags%