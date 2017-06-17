@echo off
rm -vr build
mkdir build
cd build
mkdir Sub-system
mkdir AI
cd AI
mkdir alexa
mkdir lexa
mkdir harley
mkdir raven
mkdir betty
mkdir sid
cd "C:\Users\Cameron\Desktop\code projects\C Programming\C++\WIP\TitanOS\Windows\build"

REM //alexa
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ../AI/ALEXA/Alexa.cpp -o ../AI/ALEXA/alexa.o
windres ..\AI\ALEXA\icon.rc ..\AI\ALEXA\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o AI\alexa\Alexa.exe ..\AI\ALEXA\alexa.o ..\AI\ALEXA\icon.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //betty
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ..\AI\BETTY\Betty.cpp -o ..\AI\BETTY\betty.o
windres ..\AI\BETTY\icon.rc ..\AI\BETTY\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o AI\betty\Betty.exe ..\AI\BETTY\betty.o ..\AI\BETTY\icon.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //harley
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ..\AI\HARLEY\Harley.cpp -o ..\AI\HARLEY\harley.o
windres ..\AI\HARLEY\icon.rc ..\AI\HARLEY\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o AI\harley\Harley.exe ..\AI\HARLEY\harley.o ..\AI\HARLEY\icon.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //sid
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ..\AI\SID\Sid.cpp -o ..\AI\SID\sid.o
windres ..\AI\SID\icon.rc ..\AI\SID\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o AI\sid\Sid.exe ..\AI\SID\sid.o ..\AI\SID\icon.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //lexa
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ..\AI\LEXA\Lexa.cpp -o ..\AI\LEXA\lexa.o
windres ..\AI\LEXA\icon.rc ..\AI\LEXA\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o AI\lexa\Lexa.exe ..\AI\LEXA\lexa.o ..\AI\LEXA\icon.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //raven
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ..\AI\RAVEN\Raven.cpp -o ..\AI\RAVEN\Raven.o
windres ..\AI\RAVEN\icon.rc ..\AI\RAVEN\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o AI\raven\Raven.exe ..\AI\RAVEN\icon.o ..\AI\RAVEN\Raven.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //PilotOS
g++ -v -Wwrite-strings -fpermissive -I ../headers/ -c ..\Sub-system\PilotOS\PilotOS.cpp -o ..\Sub-system\PilotOS\PilotOS.o
windres ..\Sub-system\PilotOS\icon.rc ..\Sub-system\PilotOS\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../headers/ -o Sub-system\PilotOS.exe ..\Sub-system\PilotOS\PilotOS.o ..\Sub-system\PilotOS\icon.o -lwinmm C:\Mingw\lib\libws2_32.a

REM //OS
g++ -v -Wwrite-strings -fpermissive -c ..\TitanOS(Windows).cpp -o ..\titan.o
windres ..\icon.rc ..\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -o TitanOS.exe ..\titan.o ..\icon.o 
echo cleaning the output files
rm -v ..\icon.o
rm -v ..\titan.o
rm -v ..\AI\ALEXA\alexa.o
rm -v ..\AI\ALEXA\icon.o
rm -v ..\AI\BETTY\betty.o 
rm -v ..\AI\BETTY\icon.o
rm -v ..\AI\HARLEY\harley.o 
rm -v ..\AI\HARLEY\icon.o
rm -v ..\AI\SID\sid.o 
rm -v ..\AI\SID\icon.o
rm -v ..\AI\LEXA\lexa.o 
rm -v ..\AI\LEXA\icon.o
rm -v ..\AI\RAVEN\icon.o 
rm -v ..\AI\RAVEN\Raven.o
rm -v ..\Sub-system\PilotOS\PilotOS.o 
rm -v ..\Sub-system\PilotOS\icon.o
echo Copying Voice Data
cp -vr ..\AI\ALEXA\voice AI\ALEXA\
cp -vr ..\AI\LEXA\voice AI\LEXA
cp -vr ..\AI\RAVEN\voice AI\RAVEN
cp -vr ..\AI\SID\voice AI\SID
cp -vr ..\AI\HARLEY\voice AI\HARLEY
cp -vr ..\AI\BETTY\voice AI\BETTY
cd C:\Users\Cameron\Desktop\code projects\C Programming\C++\WIP\TitanOS\Windows