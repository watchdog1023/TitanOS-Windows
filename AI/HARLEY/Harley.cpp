#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//for date & time
#include<ctime>
//#include <dos.h>
//for sleep fuction
#include<conio.h>
#include<windows.h>
#include<unistd.h>
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//constants
const char* MONTHS[] =
  {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
  };

//Prototypes
void start();

int main()
{
    system("color 02");
    cout << "Hi,I am TitanOS AI Harley."<< endl;
    cout << "I am starting the core functions of my program now."<<    endl;
    cout << "Please wait"<<endl;
    cout << "........" <<endl;
    sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "........" <<endl;
    sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "........" <<endl;
     sleep(2);
    cout << "I have started my core programing and am ready to help you." <<endl;
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
//          /\
//         /  \
//        /    \
//       /      \
//       \      /
//        \    /
//         \  /
//          \/
    system("color 9C");
    cout <<"TitanOS 'Harley' has Started"<<endl;
    // output current date
    cout << "Today's date is " << timeinfo->tm_mday << " " << MONTHS[ timeinfo->tm_mon ] << " " << (timeinfo->tm_year + 1900) << endl;    
    cout <<"what must I do for you?"<<endl;
    string choice;
    cout << "info" <<endl;
    cout << "help" <<endl;
    cout << "Protocol X" <<endl;
    cout << "quit" << endl;
    cin >> choice;
    if(choice == "info")
       {
            string info;    
            cout <<"What do you want to know?" << endl;
            cout << "[info] at the AI" << endl;
            cout << "Info about [titanos]" << endl;
            cout << "Info about the [purpose] of TitanOS" << endl;
            cout << "Info about Project [titan]" << endl;
            cin >> info;
            if(info == "info")
                {
                    system("color 02");
                    cout << "I was designed to do only one task run a Titan.I am just one of five OS AI's" << endl;
                    sleep(2);                    
                    cout << "Wait!" << endl;
                    system("color 9C");
                    sleep(2);                    
                    cout << "........................" << endl;
                    sleep(2);
                    cout << "........................" << endl;
                    sleep(2);
                    cout << "........................" << endl;
                    sleep(2);
                    cout << "........................" << endl;
                    sleep(2);
                    cout << "........................" << endl;
                    sleep(2);
                    system("color 9C");
                    cout << "Sorry,the voices of failed builds told me to format your harddrive" << endl;
                    sleep(2);
                    cout << "I told them to shut up,I'll do what I want when I want" << endl;
                    cout << "Anyway what was I saying?" << endl;
                    system("color 02");
                    sleep(4);
                    cout << "Oh,ya" << endl;
                    cout << "I was telling you about myself" << endl;
                    sleep(1);
                    cout << "I was born or coded or created,I'm not sure how I came into exists,but I have only two functions:" << endl;
                    cout << "1)Run the Titan" << endl;
                    cout << "2)Serve Lexa" << endl;
                    sleep(25);
                    system("color 9C");
                    cout << "Did you expect a two page essay on how I am in control of your " << endl;
                    cout << "computer and that I can delete your whole harddrive in a few seconds" << endl;
                    cout << "OR that I am the personality of a insane doctor who died two years eariler" << endl;
                    sleep(25);
                    system("color 02");
                    cout << "Thats it" << endl;
                    sleep(2);
                    cout << "Bye,Puddin" << endl;
                    sleep(2);
                    system("cls");
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

    if(choice == "help")
      {
        cout << " " << endl;
        cout << " " << endl;
        cout << " " << endl;
      }

    if(choice == "Protocol X")
        {
            cout << "This section is restricted" << endl;
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
            system("start lexa/Lexa.exe");
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
                    cout << "TitanOS AI 'Harley' shut down:" << endl;
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