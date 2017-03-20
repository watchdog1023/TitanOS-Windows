#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//#include <dos.h>
//for sleep fuction
#include<conio.h>
#include<windows.h>
#include<unistd.h>
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void start();

int main()
{
    system("color 02");
    cout <<"Hi,I am TitanOS AI Alexa."<< endl;
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
    cout <<"TitanOS 'Alexa' has Started"<<endl;
    cout <<"what must I do for you?"<<endl;
    string choice; 
    cout<<"info"<<endl;
    cout <<"help"<<endl;
    cout<<"Protocol X"<<endl;
    cin >>choice;
    if(choice == "info")
       {
            string info;    
            cout <<"What do you want to know?" << endl;
            cout << "[info] at the AI" << endl;
            cout << "info about [titanos]" << endl;
            cout << "info about the [purpose] of TitanOS" << endl;
            cin >> info;
            if(info == "info")
                {
                    cout << "I was created to perform one task,control Titans.I am one of five AI's." << endl;
                    sleep(2);
                    
                    start();
                }
            
            if(info == "titanos")
                {
                    cout << "" << endl;
                    start();
                }
            
            if(info == "purpose")
                {
                    cout << "" << endl;
                    start();
                }   
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
                    system("start AI/lexa/lexa.exe");
                    system("exit");
                }
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
                    cout << "TitanOS AI 'Alexa' shut down:" << endl;
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
                    start(); 
                }
        }
}