#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//for date & time
#include<ctime>
#include <dos.h>
//for sleep fuction
#include<conio.h>
#include<windows.h>
#include<unistd.h>
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>
//mp3 libs
#include "HQGL_CLASS.h"
//Internet Connectivity 
#include <winsock2.h>
#include <ws2tcpip.h>

using namespace std;

//constants
const char* MONTHS[] =
  {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
  };

//Protoypes
void start();

int main()
{
    system("color 02");
    cout <<"Greetings,I am TitanOS AI Sid."<< endl;
    cout <<"I am starting the core functions of my program now."<<    endl;
    cout <<"Please wait"<<endl;
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"........" <<endl;
    sleep(2);
    cout <<"I have started my core programing and am ready to help you." <<endl;
    sleep(1);
    system("cls");
    start();
}

void start()
{
    //get date variables
    time_t     rawtime;
    struct tm* timeinfo;
    time( &rawtime );
    timeinfo = localtime( &rawtime );   

    system("color 02");
    cout <<"TitanOS 'Sid' has Started"<<endl;
    // output current date
    cout << "Today's date is " << timeinfo->tm_mday << " " << MONTHS[ timeinfo->tm_mon ] << " " << (timeinfo->tm_year + 1900) << endl;    
    cout <<"what must I do for you?"<<endl;
    string choice;
    cout<<"info"<<endl;
    cout <<"help"<<endl;
    cout<<"Protocol X"<<endl;
    cout << "quit" << endl;
    cin >>choice;
    if(choice == "info")
       {
            string info;    
            cout <<"What do you want to know?" << endl;
            cout << "[info] at the AI" << endl;
            cout << "info about [titanos]" << endl;
            cout << "info about the [purpose] of TitanOS" << endl;
            cout << "Info about Project [titan]" << endl;
            cin >> info;
            if(info == "info")
                {
                    cout << "I was created to perform one task control a titan.I'm one of five AI's." << endl;
                    sleep(2);
                    cout <<    "I was modelled after the first titan pilot." << endl;
                    sleep(2);
                    cout << "Who died during the first titamfall." << endl;
                    sleep(2);
                    cout << "He will live on in me" << endl;
                    sleep(2);
                    cout << "I have two directives:" << endl;
                    sleep(2);
                    cout << "1)Run the Titan" << endl;
                    cout << "2)Serve Lexa" << endl;
                    sleep(10);
                    start();
                }
            
            if(info == "titanos")
                {
                    cout << "" << endl;
                    system("cls");
                    start();
                }
            
            if(info == "purpose")
                {
                    cout << "" << endl;
                    system("cls");                    
                    start();
                }
          if(info == "titan")
              {
                cout << "It is an idea where we put gaint man controlled/AI control robots(Titans) on space stations(Titan Platforms) which lives in lower earth orbit(LEO) " << endl;
                cout << "then when the pilots call their Titans they will be released from the platforms and dropped onto the earths surface to keep the 'peace'." << endl;
                cout << "When they are done they will come to my space elevator platform to be launched to the elevator holding station in space,waiting for the Titan platform to come n collecte it." << endl;
                sleep(25);
                system("cls");
                start();
              }
       }

    if(choice == "Lexa come treekru")
      {
        system("cd ..");
        system("start lexa/Lexa.exe");
        system("exit");
      }

    if(choice == "Protocol X")
        {
            cout << "This section is restricted" << endl;
            sleep(2);
                    cout << "Redirecting to TitanOS Kernel AI" << endl;
                    cout << "Please wait" << endl;
                    cout <<"........" <<endl;
                    sleep(2);
                    cout <<"........" <<endl;
                    sleep(2);
                    cout <<"........" <<endl;
                    sleep(2);
                    cout <<"........" <<endl;
                    sleep(2);
                    cout <<"........" <<endl;
                    sleep(2);
                    cout <<"........" <<endl;
                    sleep(2);
                    system("cd ..");
                    system("start AI/lexa/lexa.exe");
                    system("exit");
        }

    if(choice == "quit")
        {
            string quit;
            cout << "Are you sure?[y/n]" << endl;
            cin >> quit;   
            if(quit == "y")
                {
                    cout << "Shutting down system" << endl;
                    cout << "Please Wait" << endl;
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "Pulling Back Probes and other system objects" << endl;
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "........." << endl;
                    sleep(2);
                    cout << "TitanOS AI 'Sid' shut down:" << endl;
                    cout << "C";
                    cout << "o";
                    cout << "m";
                    cout << "p";
                    cout << "l";
                    cout << "e";
                    cout << "t";
                    cout << "e";
                    system("exit");
                }
            if (quit == "n")
                {
                  system("cls");
                  start();  
                }
        }
}