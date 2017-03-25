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

//void Prototypes
void start();
void boot();
void training();
void training_recruit();
void training_battle();
void training_titan();

int main()
{
	boot();
}

void boot()
{
	system("color 02");
	string pass;
	cout << "  ___________________________________________ " << endl;
	cout << " |     _________________________________     | " << endl;
	cout << " |    |       |                 |       |    | " << endl;
	cout << " |   |        |                 |        |   | " << endl;
	cout << " |  |         |_________________|         |  | " << endl;
	cout << " | |          |                 |          | | " << endl;
	cout << " | |          |                 |          | | " << endl;
	cout << " | |          |     Welcome     |          | | " << endl;
	cout << " | |          |      Pilot      |          | | " << endl;
	cout << " | |          |                 |          | | " << endl;
	cout << " | |          |_________________|          | | " << endl;
	cout << " | |          |                 |          | | " << endl;
	cout << " |  |         |                 |         |  | " << endl;
	cout << " |   |        |                 |        |   | " << endl;
	cout << " |    |_______|_________________|_______|    | " << endl;
	cout << " |___________________________________________| " << endl;
	cout << "What would you like to do?" << endl;
	cout << "Pilot Trainning [sim]" << endl;
	cout << "Start TitanOS [main] System" << endl;
	cin >> pass;
	if(pass == "main")
		{
			start();
		}
	if(pass == "sim")
		{
			training();
		}
}

void start()
{
	system("color 02");
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

void training()
	{
		string diff;
		cout << "Welcome New or Returning Pilot" << endl;
		cout << "Please Chose your level of Experience" << endl;
		cout << "[recruit]" << endl;
		cout << "[battle] hardened" << endl;
		cout << "[titan] master" << endl;
		cin >> diff;
		if(diff == "recruit")
			{
				training_recruit();			
			}
		if(diff == "battle")
			{
				training_battle();
			}
		if(diff == "titan")
			{
				training_titan();
			}
}

void training_recruit()
	{

	}

void training_battle()
	{

	}

void training_titan()
	{

	}