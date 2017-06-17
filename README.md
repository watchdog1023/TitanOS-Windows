# TitanOS-Windows
compile with -fpermissive and -Wwrite-strings flags

create icon data with windres icon.rc icon.o

Build with -static -static-libgcc -static-libstdc++ flags at start and -lwinmm C:/path to/libws2_32.a flag at end

*build(full_build.bat) file will be packaged with the project

*The file assume that C:/mingw/bin and C:/cygwin/bin is already added to your system path Variable 
