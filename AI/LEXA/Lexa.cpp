//TitanOS Kernel AI(AI commander)
//build lexa_come_treekru
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//for date & time
#include<ctime>
//#include<dos.h>
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
void lexa();
void boot();
void tier1();
void debug();

//global variables
string task;

int main()
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
    if(code != "1023", "2109", "1738", "1408", "2046", "1095")
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
            if(sure == "y")
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
            if(sure != "y")
                {
                    cout << "They Live another day." << endl;
                    system("cls");
                    lexa();
                }
        }  
        if(task == "rouge")
         {
            cout <<""<<endl;

         }
        if(task == "flame")
         {
            cout <<""<<endl;
         }
        if(task == "purge")
         {
            string sure;
            cout << "Are you sure?" << endl;
            cin >> sure;
            if(sure == "y")
            { 
//this is a temp statement
                cout <<"This feature is no ready because this is a reusable build"<<endl;
//this is a temp statement
                cout << "GoodBye" << endl;
                //system("cd /");
                //system("rm -vr /");
            }
            if(sure != "y")
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
    
    }

void tier1()
    {
        string dia;
        cout << "Activing root mode" << endl;
        sleep(2);
        cout << "Welcome Tier 1 Opperator,must I run a diagnostic test?" << endl;
        cin >> dia;
        if(dia == "y")
            {
                cout << "OK" << endl;
                
            }
        if(dia == "n")
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
    sleep(2);
    string debug;
    cout << "Do you want me to start a Terminal" << endl;
    cin >> debug;
    if(debug == "Yes", "yes", "YES", "Y", "y")
      {
        system("cmd");
      }
    if(debug == "No", "no", "NO", "N", "n")
      {
        main();  
      }
}