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
					system("start AI/alexa/alexa.exe");
				}
			if(final == "n")
				{
					system("cls");
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
					system("start AI/betty/betty.exe");
				}
			if(final == "n")
				{
					system("cls");
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
					system("start AI/harley/harley.exe");
				}
			if(final == "n")
				{
					system("cls");
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
					system("start AI/lexa/lexa.exe");
				}
			if(final == "n")
				{
					system("cls");
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
					system("start AI/sid/sid.exe");
				}
			if(final == "n")
				{
					system("cls");
					start();
				}
		}
	
}