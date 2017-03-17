#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
//#include <dos.h>
//for sleep fuction
#include <conio.h> 
//C libs to use system function
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void start();

int main()
{
	start();
}

void start()
{
	string ai_choice;
	cout << "Which AI would you like to use?" << endl;
	cout << "Alexa" << endl;
	cout << "Betty" << endl;
	cout << "Harley" << endl;
	cout << "Lexa" << endl;
	cout << "Sid" << endl;
	cin >> ai_choice;	
	
	if(ai_choice == "alexa")
		{
			string final;
			cout << "Are you sure?(This can't be changed without a reboot)" << endl;
			cin >> final;
			if(final == "y")
				{
					system("alexa");
				}
			if(final == "n")
				{
					system("clear");
					start();
				}
		}
	if(ai_choice == "betty")
		{
			string final;
			cout << "Are you sure?(This can't be changed without a reboot)" << endl;
			cin >> final;
			if(final == "y")
				{
					system("betty");
				}
			if(final == "n")
				{
					system("clear");
					start();
				}
		}
	if(ai_choice == "harley")
		{
			string final;
			cout << "Are you sure?(This can't be changed without a reboot)" << endl;
			cin >> final;
			if(final == "y")
				{
					system("harley");
				}
			if(final == "n")
				{
					system("clear");
					start();
				}
		}
	if(ai_choice == "lexa")
		{
			string final;
			cout << "Are you sure?(This can't be changed without a reboot)" << endl;
			cin >> final;
			if(final == "y")
				{
					system("lexa");
				}
			if(final == "n")
				{
					system("clear");
					start();
				}
		}
	if(ai_choice == "sid")
		{
			string final;
			cout << "Are you sure?(This can't be changed without a reboot)" << endl;
			cin >> final;
			if(final == "y")
				{
					system("sid");
				}
			if(final == "n")
				{
					system("clear");
					start();
				}
		}
	
}