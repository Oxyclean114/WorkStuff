// FileIO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createFile()
{
	char print;
	int piss = 0;

	ofstream testfile;
	testfile.open("test.txt");
	while (piss == 0)
	{
		cout << "Enter the character to be printed\n";
		cin >> print;
		testfile << print << "\n";
		cout << print << "\n";
		cout << "Enter 0 to continue\n";
		cin >> piss;
	}
	testfile.close();
}

void readFile()
{
	int piss = 0;
	string x;
	ifstream testfile("test.txt");
	testfile.open("test.txt");

	while (piss == 0)
	{
		testfile >> x;
		cout << x << "\n";
		cout << "Enter 0 to continue\n";
		cin >> piss;
	}
	testfile.close();
	
}

int main()
{
	createFile();
	readFile();
}




