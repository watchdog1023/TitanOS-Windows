//This AI is incharge of all the titan platforms and the space elevator in project Titan 
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


//global variables


int main()
  {
    //get date variables
    time_t     rawtime;
    struct tm* timeinfo;
    time( &rawtime );
    timeinfo = localtime( &rawtime );   
    
    string envir;    
    system("color 02");
    cout << "I am Raven" << endl;
    cout << "I am the Chief Mechanic on Project Titan" << endl;
    // output current date
    cout << "Today's date is " << timeinfo->tm_mday << " " << MONTHS[ timeinfo->tm_mon ] << " " << (timeinfo->tm_year + 1900) << endl;
    cout << "Where will I be Operating?" << endl;
    cout << "1)Titan Platform" << endl;
    cout << "2)Space Elevator" << endl;    
    cin >> envir;
      
    if(envir == "1")
      {
        string plat;
        cout << "Which Platform will I be Operating On?" << endl;
        cin >> plat;
        
        if(plat == " ")
          {
            
          }
      } 
          
    if(envir == "2")
      {
        string dia;
        cout << "Must I start a Diagnostic?" << endl;
        cin >> dia;
          
        if(dia == "yes")
          {
            
          }
          
          if(dia == "no")
          {
            string job;
cout << "What Job must I do then?" << endl;
cin >> job;
          }
          
      }
  
    if(envir != "1", "2")
      {
          string job;
cout << "What Job must I do then?" << endl;
cin >> job;
      }



  }