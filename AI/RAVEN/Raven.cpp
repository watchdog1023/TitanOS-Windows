//This AI is incharge of the titan platforms and the space elevator in project TITAN
//build raven_come_skykru
#include<iostream>
#include<sstream>
#include<fstream>
#include<istream>
#include<string>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<cassert>
#include<cstdio>
//for date & time
#include<ctime>
#include<time.h>
#include<dos.h>
//for sleep fuction
#include<conio.h>
#include<windows.h>
#include<unistd.h>
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>
//mp3 libs
#include "include/HQGL_CLASS.h"
//Downloading
#include<wininet.h>
#include "include/download.h"
//UUID Generaterion
#include "include/CkCrypt2.h"
//Spidering
#include "include/CkSpider.h"
#include "include/CkStringArray.h"
//Threading
#include<limits.h>
//Internet Connectivity 
#include<winsock2.h>
#include<WinSock.h>
#include<ws2tcpip.h>
//MYSQL database

//Video and Image Displaying
#include "include/opencv2/highgui/highgui.hpp"
#include "include/opencv/cv.h"
#include "include/opencv/highgui.h"
//Neural Net
/*
#include<Neuron.h>
#include<Network.h>
*/
//Parameters
#pragma comment(lib, "wsock32.lib")

using namespace std;

//functions
std::string encrypt(std::string msg, std::string const& key)
{
    if(!key.size())
        return msg;
    
    for (std::string::size_type i = 0; i < msg.size(); ++i)
        msg[i] ^= key[i%key.size()];
    return msg;
}

std::string decrypt(std::string const& msg, std::string const& key)
{
    return encrypt(msg, key); 
}

//constants
const char* MONTHS[] =
  {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
  };

//for mp3 output
HQGL            hTest;
char Key;

//Prototypes
void server();
void client();
void debug();

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
    hTest.HQPlayMP3( "voice/greedings.mp3" );
    cout << "I am the Chief Mechanic on Project TITAN" << endl;
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
//There will be Ten Total Platforms
        if(plat == "1", "2", "3", "4", "5", "6", "7", "8", "9", "10")
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
            
          }
          
      }
  
    if(envir != "1", "2")
      {
        string what; 
        cout << "Then,what do you want me to do?" << endl;
        cin >> what;
        if(what == "kill", "Kill", "KILL")
          {
            cout << "I can not!!" << endl;
            sleep(25);            
            main();
          }
        if(what == "Destroy Network", "DESTROY NETWORK", "DESTROYNETWORK", "destroynetwork", "destory network", "Destroy_Network", "DESTROY_NETWORK", "destory_network")
          {
            cout << "I will not!!" << endl;
            sleep(25);            
            main();
          }
        if(what == "Destroy Titans", "DESTROYTITANS", "DESTROY TITAN", "destroy titans", "Destroy_Titans", "DESTROY_TITAN", "destroy_titans")
          {
            cout << "We can not!!" << endl;
            sleep(25);
            main();
          }
        if(what != "Destroy Network", "DESTROY NETWORK", "DESTROYNETWORK", "destroynetwork", "destory network", "Destroy_Network", "DESTROY_NETWORK", "destory_network",  "Destroy Titans", "DESTROYTITANS", "DESTROY TITAN", "destroy titans", "Destroy_Titans", "DESTROY_TITAN", "destroy_titans", "kill", "Kill", "KILL")
          {
           main();
          }

      }
  }