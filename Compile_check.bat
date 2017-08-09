@echo off
rm -vr compile_check
mkdir compile_check
cd compile_check
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../TitanOS(Windows).cpp 
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/AlEXA/Alexa.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/BETTY/Betty.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/HARLEY/Harley.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/ISAC/Isac.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/LEXA/Lexa.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/RAVEN/Raven.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../AI/SID/Sid.cpp
g++ -v -Wwrite-strings -fpermissive -I ../include/ -c ../Sub-system/PilotOS/PilotOS.cpp
cd ..