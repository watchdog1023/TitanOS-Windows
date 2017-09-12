//TitanOS Kernel AI(AI commander)
//build lexa_come_treekru
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
/*#include<Neuron.h>
#include<Network.h>
*/
//Parameters
#pragma comment(lib, "wsock32.lib")

using namespace std;
using namespace cv;

//functions
string encrypt(string msg, string const& key)
{
    if(!key.size())
        return msg;
    
    for (std::string::size_type i = 0; i < msg.size(); ++i)
        msg[i] ^= key[i%key.size()];
    return msg;
}

string decrypt(string const& msg, string const& key)
{
    return encrypt(msg, key); 
}

//constants
const char* MONTHS[] =
  {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
  };

//for mp3 output
HQGL hTest;
char Key;

//Prototypes
void lexa();
void boot();
void tier1();
void debug();
void bootinit();
void server();
void client();

//global variables
string task;

//Greeting Variable
string greet;

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
    greet = "1";
    string code;
    cout << "Please enter Director code:" << endl;
    cin >> code;
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
 /*   if(code != "1023", "2109", "1738", "1408", "2046", "1095", "2026")
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
  */
 //testing code
    if(code == "1111")
    {
      lexa();
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
      if(greet == "1")
      {
        hTest.HQPlayMP3( "voice/greedings1.mp3" );
        sleep(4);        
      }
      if(greet == "2")
      {
        hTest.HQPlayMP3( "voice/greedings2.mp3" );
        sleep(2);        
      }
      // output current date
      cout << "Today's date is " << timeinfo->tm_mday << " " << MONTHS[ timeinfo->tm_mon ] << " " << (timeinfo->tm_year + 1900) << endl;
      cout << "What task must I preform?" << endl;
      cout << "[kill] the Others"<<endl;
      cout <<"[rouge] Protocol"<<endl;
      cout <<"The [flame] is dead"<<endl;
      cout <<"[purge] system"<<endl;
      cout << "[protocol] X" << endl;
      cout << "[comms] Mode" << endl;
      hTest.HQStopMP3( "voice/greedings1.mp3" );
      hTest.HQStopMP3( "voice/greedings2.mp3" );
      greet = "2";
      cin >> task;
      if(task == "kill")
         {
            string sure;
            cout <<"Are you sure they deserve to die?"<<endl;
            hTest.HQPlayMP3( "voice/die.mp3" );
            sleep(2);
            hTest.HQStopMP3( "voice/die.mp3" );
            cin >> sure;
            if(sure == "yes")
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
            if(sure != "yes")
                {
                    cout << "They Live another day." << endl;
                    hTest.HQPlayMP3( "voice/live_another_day.mp3" );
                    sleep(2);
                    hTest.HQStopMP3( "voice/live_another_day.mp3" );
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
            hTest.HQPlayMP3( "voice/are_you_sure.mp3" );
            sleep(1);
            hTest.HQStopMP3( "voice/are_you_sure.mp3" );
            cin >> flamesure;
            if(flamesure == "Yes", "yes", "YES", "Y", "y")
              {
                cout << "" << endl;
                cout << "" << endl;
              }
            if(flamesure != "Yes", "yes", "YES", "Y", "y")
              {
                cout << "Thank The Creator" << endl;
                hTest.HQPlayMP3( "voice/thank_the_creater.mp3" );
                sleep(1);
                hTest.HQStopMP3( "voice/thank_the_creater.mp3" );
                lexa();
              }
         }

        if(task == "purge")
         {
            string sure;
            cout << "Are you sure?" << endl;
            hTest.HQPlayMP3( "voice/are_you_sure.mp3" );
            sleep(1);
            hTest.HQStopMP3( "voice/are_you_sure.mp3" );
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

        if(task == "protocol")
            {
                cout << "You have chosen 'Protocol X'" << endl;
                hTest.HQPlayMP3( "voice/protocol_x_means.mp3" );
                sleep(2);
                string mean;        
                cout << "Do you know what this means?" << endl;
                sleep(2);
                hTest.HQStopMP3( "voice/protocol_x_means.mp3" );
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
        if(task == "comms")
        {
            string mode;
            hTest.HQPlayMP3( "voice/mode_start.mp3" );
            sleep(2);
            cout << "Which mode do you want to start?" << endl;
            cout << "[p2p]" << endl;
            cout << "[text]" << endl;
            hTest.HQStopMP3( "voice/mode_start.mp3" );
            cin >> mode;
            if(mode == "p2p")
                {
                    string mode_p2p;
                    hTest.HQPlayMP3( "voice/like_to_be.mp3" );
                    cout << "Which would you like to be?" << endl;
                    cout << "[client]" << endl;
                    cout << "[server]" << endl;
                    sleep(2);
                    hTest.HQStopMP3( "voice/like_to_be.mp3" );
                    cin >> mode_p2p;
                    if(mode_p2p == "server")
                        {
                            server();
                        }
                    if(mode_p2p == "client")
                        {
                            client();
                        }
                }    
            if(mode == "text")
                {    
                    string textchoice;
                    cout << "What would you like to do?" << endl;
                    cout << "[encrypt] text" << endl;
                    cout << "[decrypt] text" << endl;
                    cin >> textchoice;
                    if(textchoice == "encrypt")
                        {
                            string message5;
                            cout << "Please enter the text,press enter to encrypt the text" << endl;
                            cin >> message5;
                            string message = encrypt(message5 , "monkey");
                            ofstream myfile("encrypted.txt");
                            if (myfile.is_open())
                                {
                                    myfile << message << endl;
                                }
                            system("cls");    
                            lexa();     
                        }
                    if(textchoice == "decrypt")
                        {
                            string message6;
                            cout << "Enter the encrypted text" << endl;
                            cin >> message6;
                            cout << "\nDecrypted: " << decrypt(message6, "monkey") << endl;
                            string textoutput;
                            cout << "Must I output this to a .txt file?" << endl;
                            cin >> textoutput;
                            if(textoutput == "yes")
                                {
                                    ofstream myfile2("decrypted.txt");
                                    if (myfile2.is_open())
                                        {
                                            myfile2 << decrypt(message6, "monkey") << endl;
                                        }
                                }
                            if(textoutput != "yes")
                                {
                                    sleep(20);
                                    system("cls");
                                    lexa();
                                }
                        }
                }
        }
    
  } 

void tier1()
    {
        string dia;
        cout << "Activating root mode" << endl;
        hTest.HQPlayMP3( "voice/activating_root_mode.mp3" );
        sleep(3);
        cout << "Welcome Tier 1 Operator,must I run a diagnostic test?" << endl;
        sleep(3);
        hTest.HQStopMP3( "voice/activating_root_mode.mp3" );
        cin >> dia;
        if(dia == "Yes", "yes", "YES", "Y", "y")
            {
                cout << "OK" << endl;
                system("cls");
                lexa();
            }
        if(dia != "Yes", "yes", "YES", "Y", "y")
            {
              cout << "Ok" << endl;
              system("cls");
              lexa();
            }
    }

void debug()
  {
    cout << "I am Lexa" << endl;
    sleep(2);
    hTest.HQPlayMP3( "voice/debug.mp3" );
    cout << "I am the TitanOS Commander" << endl;
    sleep(2);
    cout << "You are a TitanOS Tech" << endl;
    string debug;
    cout << "Do you want me to start a Terminal" << endl;
    sleep(4.5);
    hTest.HQStopMP3( "voice/debug.mp3" );
    cin >> debug;
    if(debug == "yes")
      {
        system("cmd");
      }
    if(debug != "yes")
      {
        string dia;
        cout << "Do you want me to run a diagnostic test?" << endl;
        hTest.HQPlayMP3( "voice/start_diagnostic.mp3" );
        sleep(2);
        hTest.HQStopMP3( "voice/start_diagnostic.mp3" );
        cin >> dia;
        if(dia == "yes")
            {
            
            }
        if(dia != "yes")
            {
                loop:
                    string what;
                    hTest.HQPlayMP3( "voice/do_then.mp3" );
                    sleep(2);
                    cout << "What do you want to do then?" << endl;
                    hTest.HQStopMP3( "voice/do_then.mp3" );
                    cin >> what;
                    if(what == "")
                    {   
                
                    }
                    if(what == "")
                    {   
                
                    }
                    if(what == "")
                    {   
                
                    }
                    if(what != "")
                    {   
                        goto loop;
                    }
                    
            }
        
      }
}


void server()
{
    //Creating the server vars
    WSADATA WSAData;
    SOCKET server, client;
    SOCKADDR_IN serverAddr, clientAddr;
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(5555);
    bind(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
    listen(server, 0);
    
    //Display IP Address vars
    WORD wVersionRequested;
	WSADATA wsaData;
	char name[255];
	PHOSTENT hostinfo;
	wVersionRequested = MAKEWORD( 1, 1 );
	char *ip;

    cout << "Listening for incoming connections..." << endl;
    //Display IP Address
    if ( WSAStartup( wVersionRequested, &wsaData ) == 0 )
		if( gethostname ( name, sizeof(name)) == 0)
		{
			printf("Host name: %s\n", name);

			if((hostinfo = gethostbyname(name)) != NULL)
			{
				int nCount = 0;
				while(hostinfo->h_addr_list[nCount])
				{
					ip = inet_ntoa (*(struct in_addr *)hostinfo->h_addr_list[nCount]);

					printf("IP #%d: %s\n", ++nCount, ip);
				}
			}
		}
 
    char buffer[1024];
    int clientAddrSize = sizeof(clientAddr);
    if((client = accept(server, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
    {
        cout << "Client connected!" << endl;
        recv(client, buffer, sizeof(buffer), 0);
        cout << "Client says: " << buffer << endl;
        memset(buffer, 0, sizeof(buffer));
 
        closesocket(client);
        cout << "Client disconnected." << endl;
        system("cls");
        lexa();
    }
}

void client()
{
    hTest.HQPlayMP3( "voice/server_ip.mp3" );
    cout << "Enter the Server's IP Address" << endl;
    sleep(2);
    hTest.HQStopMP3( "voice/server_ip.mp3" );
    string server_ip;
    getline(cin, server_ip);
    const char* ip_server = server_ip.c_str();
    
    WSADATA WSAData;
    SOCKET server;
    SOCKADDR_IN addr;
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);
    addr.sin_addr.s_addr = inet_addr(ip_server); 
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5555);
    connect(server, (SOCKADDR *)&addr, sizeof(addr));
    cout << "Connected to server: " + server_ip << endl;
 
    char buffer[1024];
    hTest.HQPlayMP3( "voice/message_input.mp3" );
    cout << "Please input the message:" << endl;
    sleep(2);
    hTest.HQStopMP3( "voice/message_input.mp3" );
    cin >> buffer;
    send(server, buffer, sizeof(buffer), 0);
    hTest.HQPlayMP3( "voice/message_sent.mp3" );
    cout << "Message sent!" << endl;
    sleep(2);
    hTest.HQStopMP3( "voice/message_sent.mp3" );
 
    closesocket(server);
    WSACleanup();
    cout << "Socket closed." << endl << endl;
    system("cls");
    lexa();
}