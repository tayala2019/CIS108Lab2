//Tamishia Ayala
//Date: 01/21/2019
//CIS108 Lab Assignment 2
//Exercise1.cpp : This program will prompt the user for their age and also to enter the farenheit degrees


#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "Please enter your age: ";
	int iAge;
	cin >> iAge;
	int age_10plus = (iAge + 10);
	cout << "\n";
	cout << "In 10 years, you will be " << age_10plus << " years old." << endl;;
	cout << "\n";
	cout << "***********************************************************\n\n\n";
	cout << "Please enter temperature in degrees Farenheit : ";
	double sTempFar;
	cin >> sTempFar;
	double degreeCelcius = ((sTempFar - 32) * 5 / 9);
	cout << "\n";
	cout << "The temperature in degrees  celcius is : " << degreeCelcius << +"\n";

	system("pause");

}

