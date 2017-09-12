@echo off
g++ -v -Wwrite-strings -fpermissive -I ../../headers/ -c PilotOS.cpp -o PilotOS.o
windres icon.rc icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../../headers/ -o PilotOS.exe PilotOS.o -lwinmm C:\Mingw\lib\libws2_32.a

