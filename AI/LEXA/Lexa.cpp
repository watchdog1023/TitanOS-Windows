//TitanOS Kernel AI(AI commander)
//build lexa_come_treekru
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<cassert>
#include<cstdio>
//for date & time
#include<ctime>
#include<dos.h>
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

//Prototypes
void lexa();
void boot();
void tier1();
void debug();
void bootinit();

//global variables
string task;

int main()
{  
  ofstream file("flame.txt");
  if(file.is_open())
    {
//Story of the Flame
//I'm Becca come hada.I have been in the flame for 10 years now,
//I give guidance to the current commander(hada),Lexa.
//I will continue to guide Lexa to do the best she can in order for her to control the system.
//http://www.online-toolz.com/tools/text-encryption-decryption.php
      file << "IR8xPRND6PBFTM0/XNIwWHQhuKixUl48ATy8rrluxszs0ffa2ad5xwtAORHwChN2yMrLW3vn8feQ7/j2UBqCIKYKSMHxSN/Va7nBS6INxwsvRgOjwDW6QABf/a4SPAr+QctoKtPrIos9J5We2t44yL2UJU/MXCO5xi7eH/joxWSP4LuqMYC+2cBNhsvT/7lfP0ECgC/3//ZM1IoyNOXf9CG4aGc2o8KyztiwXXFsCoz18DmoEOn58UbMpZaQ6rYIJlzzM7a6ZPYD0InTF6VUAeNPpoQge+txRcPEbIwf4yo=" << endl;
      bootinit();      
    }
}

void bootinit()
{
    system("color 02");
    string code;
    cout << "Please enter Director code:" << endl;
    cin >> code;
    if(code == "2046")
        {
          cout << "Welcome Tier II Director,Steven" << endl;
          sleep(5);
          boot();
        }
    if(code == "2109")
      {
        cout << "Welcome Tier II Director,Serena" << endl;
        sleep(5);
        boot();
      }
    if(code == "1023")
      {
        tier1();
      }
    if(code == "1738")
      {
        cout << "Welcome Tier II Director,Sheldon" << endl;
        sleep(5);
        boot();
      }
    if(code == "1408")
      {
        cout << "Welcome Tier II Director,Jessie" << endl;
        sleep(5);
        boot();
      }
    if(code == "1095")
      {
        cout << "Welcome TitanOS Tech" << endl;
        sleep(5);
        debug();
      }
    if(code == "2026")
      {
        cout << "Welcome Tier II Director,Cameron" << endl;
        sleep(5);
        boot();
      }
    if(code != "1023", "2109", "1738", "1408", "2046", "1095", "2026")
      {
        cout << "You are not a Director!" << endl;
        sleep(5);
        cout << "Please use one of the base AI's" << endl;
        cout << "Goodbye" << endl;
        sleep(5);
        system("cd ..");
        system("cd ..");
        system("start TitanOS.exe");
        system("exit");
      }
}

void boot()
{
    cout << "System starting up" << endl;
    sleep(2);
    cout << "Counting all AI's" << endl;
    cout << "'Betty' = [Slave]" << endl;
    sleep(2);
    cout << "................." << endl;
    sleep(2);
    cout << "'Sid' = [Slave]" << endl;
    sleep(2);
    cout << "................." << endl;
    sleep(2);
    cout << "'Alexa' = [Slave]" << endl;
    sleep(2);
    cout << "................." << endl;
    sleep(2);
    cout << "'Harley' = [Slave]" << endl;
    sleep(2);
    cout << "................." << endl;
    sleep(2);
    cout << "'Raven' = [Chief Mechanic]" << endl;
    sleep(2);
    cout << "................." << endl;
    sleep(2);
    cout << "Commander Lexa = [Online]" << endl;
    sleep(2);
    system("cls");
    cout << "I am Lexa" << endl;
    sleep(2);            
    cout << "I am the TitanOS Commander" << endl;
    lexa();
}

void lexa()
  {
      //get date variables
      time_t     rawtime;
      struct tm* timeinfo;
      time( &rawtime );
      timeinfo = localtime( &rawtime );   

      system("color 02");
      // output current date
      cout << "Today's date is " << timeinfo->tm_mday << " " << MONTHS[ timeinfo->tm_mon ] << " " << (timeinfo->tm_year + 1900) << endl;
      cout << "What task must I preform?" << endl;
      sleep(2);        
      cout << "[kill] the Others"<<endl;
      cout <<"[rouge] Protocol"<<endl;
      cout <<"The [flame] is dead"<<endl;
      cout <<"[purge] system"<<endl;
      cout << "[protocol X]" << endl;
      cin >> task;
      if(task == "kill")
         {
            string sure;
            cout <<"Are you sure they deserve to die?"<<endl;
            cin >> sure;
            if(sure == "Yes", "yes", "YES", "Y", "y")
                {
//this is a temp statement
                    cout << "This will do nothing" << endl;
//this is a temp statement                    
//                  system("cd ..");
                    system("rmdir betty");
                    sleep(2);
                    cout << "AI 'Betty' is dead" << endl;                    
                    system("rmdir alexa");
                    sleep(2);
                    cout << "AI 'Alexa' is dead" << endl;
                    system("rmdir sid");
                    sleep(2);
                    cout << "AI 'Sid' is dead" << endl;
                    system("rmdir harley");
                    sleep(2);
                    cout << "AI 'Harley' is dead" << endl;
                    sleep(2);
                    system("cls");
                    lexa();
                }
            if(sure != "Yes", "yes", "YES", "Y", "y")
                {
                    cout << "They Live another day." << endl;
                    system("cls");
                    lexa();
                }
        }

        if(task == "rouge")
          {
            cout << "" << endl;
          }

        if(task == "flame")
         {
            string flamesure;
            cout << "Are you sure?" << endl;
            if(flamesure == "Yes", "yes", "YES", "Y", "y")
              {
                cout << "" << endl;
                cout << "" << endl;
              }
            if(flamesure != "Yes", "yes", "YES", "Y", "y")
              {
                cout << "Thank The Creator" << endl;
                sleep(5);
                lexa();
              }
         }

        if(task == "purge")
         {
            string sure;
            cout << "Are you sure?" << endl;
            cin >> sure;
            if(sure == "Yes", "yes", "YES", "Y", "y")
            { 
//this is a temp statement
                cout <<"This feature is no ready because this is a reusable build"<<endl;
//this is a temp statement
                cout << "GoodBye" << endl;
                //system("cd /");
                //system("rm -vr /");
            }
            if(sure != "Yes", "yes", "YES", "Y", "y")
            {
                system("cls");
                lexa();
            }
         }

        if(task == "protocol x")
            {
                cout << "You have chosing 'Protocol X'" << endl;
                string mean;        
                cout << "Do you know what this means?" << endl;
                cin >> mean;
                if(mean == "Yes", "yes", "YES", "Y", "y")
                    {
                        sleep(2);
                        cout << "Protocal X is not ready as yet" << endl;
                    }
                if(mean != "Yes", "yes", "YES", "Y", "y")
                    {
                        cout << "Protocol X is..." << endl;
                        sleep(2);
                        cout << "Protocal X is not ready as yet" << endl;
                    }
            }
    
  }

void tier1()
    {
        string dia;
        cout << "Activing root mode" << endl;
        sleep(2);
        cout << "Welcome Tier 1 Opperator,must I run a diagnostic test?" << endl;
        cin >> dia;
        if(dia == "Yes", "yes", "YES", "Y", "y")
            {
                cout << "OK" << endl;
                lexa();
            }
        if(dia != "Yes", "yes", "YES", "Y", "y")
            {
              cout << "Ok" << endl;
              lexa();
            }
    }

void debug()
  {
    cout << "I am Lexa" << endl;
    sleep(2);            
    cout << "I am the TitanOS Commander" << endl;
    sleep(2);
    cout << "You are a TitanOS Tech" << endl;
    string debug;
    cout << "Do you want me to start a Terminal" << endl;
    cin >> debug;
    if(debug == "Yes", "yes", "YES", "Y", "y")
      {
        system("cmd");
      }
    if(debug != "Yes", "yes", "YES", "Y", "y")
      {
        main();  
      }
}