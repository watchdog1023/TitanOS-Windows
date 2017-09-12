//ISAC is the system addition to stablise the system sub-functions
//He is an AI that can control the Titans but it runs a real-time data sim using
//battle data and learns the battle patterns
//To stop the AI's from taking over the plant,all this data will be deleted
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
#include<winsock2.h>
#include<WinSock.h>
#include<ws2tcpip.h>
//Neural Net
/*#include<Neuron.h>
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
HQGL hTest;
char Key;

//Prototypes
void start();
void server();
void client();

int main()
{
    system("color 02");
    cout <<"Hi,I am TitanOS AI Isac."<< endl;
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
    cout <<"TitanOS 'Isac' has Started"<<endl;
    // output current date
    cout << "Today's date is " << timeinfo->tm_mday << " " << MONTHS[ timeinfo->tm_mon ] << " " << (timeinfo->tm_year + 1900) << endl;
    cout <<"what must I do for you?"<<endl;
    string choice;
    cout<<"info"<<endl;
    cout <<"help"<<endl;
    cout<<"Protocol X"<<endl;
    cin >>choice;
    if(choice == "info")
       {
            string info;    
            cout << "What do you want to know?" << endl;
            cout << "[info] at the AI" << endl;
            cout << "info about [titanos]" << endl;
            cout << "info about the [purpose] of TitanOS" << endl;
            cout << "Info about Project [titan]" << endl;
            cin >> info;
            if(info == "info")
                {
                    cout << "I was created to perform one task,control Titans.I am one of six AI's." << endl;
                    sleep(2);
                    cout << "I am the base AI which that the others(except Lexa and Raven)was created from" << endl;
                    sleep(2);
                    cout << "I have two functions:" << endl;
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
                system("cls");
                sleep(25);
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
                    cout << "TitanOS AI 'Isac' shut down:" << endl;
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
        start();
    }
}

void client()
{
    hTest.HQPlayMP3( "voice/server_ip.mp3" );
    cout << "Enter the Server's IP Address" << endl;
    sleep(2);
    hTest.HQStopMP3( "voice/server_ip.mp3" );
    string server_ip;
    cin >> server_ip;
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
    start();
}