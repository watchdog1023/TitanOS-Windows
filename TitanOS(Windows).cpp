//TitanOS core
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//for date & time
#include<ctime>
//for sleep fuction
#include<conio.h>
#include<windows.h>
#include<unistd.h>
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>
//#include<dos.h>

using namespace std;

//constants


//Prototypes


//global variables


int main()
	{
		cout << "What do you want to do?" << endl;
		cout << "[Pilot] OS" << endl;
		cout << "[Centeral] OS" << endl;
		cin >> choice;
		
		if(choice == "Centeral", "centeral", "CENTERAL")
			{
				string act;
				cout << "What action do you want to do?" << endl;
				cout << "Titan [Network] Management" << endl;
				cout << "Pilot OS [Debuging]" << endl;
				cin >> act;
				if(act == "Network", "NETWORK", "network")
					{
						system("start AI/raven/raven.exe");
					}
		
				if(act == "debuging", "DEBUGING", "Debuging")
					{
						system("start AI/lexa/lexa.exe");
					}
			}
		
		if(choice == "Pilot", "pilot", "PILOT")
			{
				system("start Sub-System/PilotOS/PilotOS.exe");
			}
	}