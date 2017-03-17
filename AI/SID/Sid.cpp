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

void director_key();

int main()
{
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
    cout <<"TitanOS Sid has Started"<<endl;
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
            cin >> info;
            if(info == "info")
                {
                    cout << "" << endl;
                    
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
            int code
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
                    system("cls");
                    director_key();
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
                    goto loop;  
                }
        }
}

void director_key()
    {
        cout << "Welcome Tier 2 Director" << endl;
        cout << "You have chosing 'Protocol X'" << endl;
        string mean;        
        cout << "Do you know what this means?" << endl;
        cin >> mean;
        if(mean == "yes")
            {
                sleep(2);
                cout << "Protocal X is not ready as yet" << endl;
            }
        if(mean == "no")
            {
                cout << "Protocol X is..." << endl;
                sleep(2);
                cout << "Protocal X is not ready as yet" << endl;
            }
    }   