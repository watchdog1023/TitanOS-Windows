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
mkdir isac
cd "C:\Users\Cameron\Desktop\code projects\C Programming\C++\WIP\TitanOS\Windows\build"

REM //Compiling the download.cpp file
g++ -v -Wwrite-strings -c ../include/download.cpp -o download.o

REM //alexa
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/ALEXA/Alexa.cpp -o ../AI/ALEXA/alexa.o
windres ..\AI\ALEXA\icon.rc ..\AI\ALEXA\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\alexa\Alexa.exe ..\AI\ALEXA\alexa.o download.o ..\AI\ALEXA\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //betty
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\AI\BETTY\Betty.cpp -o ..\AI\BETTY\betty.o
windres ..\AI\BETTY\icon.rc ..\AI\BETTY\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\betty\Betty.exe ..\AI\BETTY\betty.o download.o ..\AI\BETTY\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //harley
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\AI\HARLEY\Harley.cpp -o ..\AI\HARLEY\harley.o
windres ..\AI\HARLEY\icon.rc ..\AI\HARLEY\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\harley\Harley.exe ..\AI\HARLEY\harley.o download.o ..\AI\HARLEY\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //sid
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\AI\SID\Sid.cpp -o ..\AI\SID\sid.o
windres ..\AI\SID\icon.rc ..\AI\SID\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\sid\Sid.exe ..\AI\SID\sid.o download.o ..\AI\SID\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //isac
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\AI\Isac.cpp -o ..AI\ISAC\Isac.o
windres ..\AI\ISAC\icon.rc ..\AI\ISAC\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\isac\Isac.exe ..\AI\ISAC\Isac.o download.o ..\AI\ISAC\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //lexa
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\AI\LEXA\Lexa.cpp -o ..\AI\LEXA\lexa.o
windres ..\AI\LEXA\icon.rc ..\AI\LEXA\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\lexa\Lexa.exe ..\AI\LEXA\lexa.o download.o ..\AI\LEXA\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //raven
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\AI\RAVEN\Raven.cpp -o ..\AI\RAVEN\Raven.o
windres ..\AI\RAVEN\icon.rc ..\AI\RAVEN\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o AI\raven\Raven.exe ..\AI\RAVEN\icon.o download.o ..\AI\RAVEN\Raven.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //PilotOS
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ..\Sub-system\PilotOS\PilotOS.cpp -o ..\Sub-system\PilotOS\PilotOS.o
windres ..\Sub-system\PilotOS\icon.rc ..\Sub-system\PilotOS\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -I ../include/ -L ../libs/ -o Sub-system\PilotOS.exe ..\Sub-system\PilotOS\PilotOS.o download.o ..\Sub-system\PilotOS\icon.o -lchilkat-9.5.0 -lcrypt32 -lws2_32 -ldnsapi -lwinmm -lwininet -lpthread -lopencv_core249 -lopencv_highgui249

REM //OS
g++ -v -Wwrite-strings -fpermissive -c ..\TitanOS(Windows).cpp -o ..\titan.o
windres ..\icon.rc ..\icon.o
g++ -v -static -static-libgcc -static-libstdc++ -o TitanOS.exe ..\titan.o download.o ..\icon.o 
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
rm -v ..\AI\ISAC\Isac.o 
rm -v ..\AI\ISAC\icon.o 
rm -v ..\Sub-system\PilotOS\PilotOS.o 
rm -v ..\Sub-system\PilotOS\icon.o
rm -v download.o
echo Copying Voice Data
cp -vr ..\AI\ALEXA\voice AI\ALEXA\
cp -vr ..\AI\LEXA\voice AI\LEXA
cp -vr ..\AI\RAVEN\voice AI\RAVEN
cp -vr ..\AI\SID\voice AI\SID
cp -vr ..\AI\HARLEY\voice AI\HARLEY
cp -vr ..\AI\BETTY\voice AI\BETTY
cp -vr ..\AI\ISAC\voice AI\ISAC
cd "C:\Users\Cameron\Desktop\code projects\C Programming\C++\WIP\TitanOS\Windows"