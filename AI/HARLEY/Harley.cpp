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
    cout <<"TitanOS 'Harley' has Started"<<endl;
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
            cout << "info about [titanos]" << endl;
            cout << "info about the [purpose] of TitanOS" << endl;
            cin >> info;
            if(info == "info")
                {
                    cout << "I was designed to do only one task run a Titan.I am just one of five OS AI's.Wait!" << endl;
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
                    cout << "Sorry,the voices of failed builds told me to format your harddrive" << endl;
                    sleep(2);
                    cout << "I told them to shut up,I'll do what I want when I want" << endl;
                    cout << "Anyway what was I saying?" << endl;
                    sleep(4);
                    cout << "Oh,ya" << endl;
                    cout << "I was telling you about myself" << endl;
                    sleep(1);
                    cout << "I was born or coded or created,I'm not sure how I came into exists,but I have only two functions:" << endl;
                    cout << "1)Run the Titan" << endl;
                    cout << "2)Serve Lexa" << endl;
                    cout << "Did you expect a two page essay on how I am in control of your " << endl;
                    cout << "computer and that I can delete your whole harddrive in a few seconds" << endl;
                    cout << "OR that I am the personality of a insane doctor who died two years eariler" << endl;
                    sleep(7);                    
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
                }
            
            if(info == "purpose")
                {
                    cout << "" << endl;
                }   
       }

    if(choice == "Protocol X")
        {
            string code;
            cout << "This section is restricted" << endl;
            cout << "Please enter your Tier 2 Director code:" << endl;
            cin >> code;
            if(code == "1023")
                {
                    cout << "Welcome ,Tier 2 Director" << endl;
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
                    start();  
                }
        }
}