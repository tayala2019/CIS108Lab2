// Tamishia Ayala
//Excercise 2:Young Book, Old Book, Short Book, Long Book 
//01/25/2019


#include "pch.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {

	
	time_t rawtime = time(0);
	struct tm timeinfo;
	localtime_s(&timeinfo, &rawtime);

	cout << "Current Year:::" << (timeinfo.tm_year) + 1900 << endl;

	//std::cout << "rawtime = " << rawtime << "\n";

	cout << "Basic Book information\n";
	cout << "**************************************\n\n";

	cout << "Please enter the title of the book: ";
	string sBookTitle;
	while (true)
	{
		getline(cin, sBookTitle);

		if (sBookTitle == "") {
			cout << "Book title cannot be blank: \n\n";
			cout << "Please enter the title of the book: ";
		}
		else
		{
			break;
		}
	}
	cout << "\nPlease enter the name of the author : ";
	string sBookAuthor;
	while (true)
	{
		getline(cin, sBookAuthor);

		if (sBookAuthor == "")
		{
			cout << "Book Author cannot be blank: \n\n";
			cout << "Please enter the author of the book: ";
		}
		else
		{
			break;
		}
	}
	cout << "\nWhat year was the book published?: \n";
	cout << "Please enter a date in YYYY format (Example: 2019): ";
	int sYearPublished = 0;
	while (true)
	{
		cin >> sYearPublished;

		if (sYearPublished < 0 || sYearPublished > 2019)
		{
			std::cout << "Please enter a real year\n" << std::endl;
		}
		else
		{
			cout << "\nYear Published:  " << sYearPublished << std::endl;
			break;
		}
	}
	cout << "\nHow many pages are in the book: ";
	int sPagesInBook;
	while (true)
	{
		cin >> sPagesInBook;
		if (sPagesInBook == 0)
		{
			cout << "nvalid number of pages, please re-enter: ";
		}
		else {
			break;
		}
	}
	int  sCurrDate = (1900 + timeinfo.tm_year);
	int sBookAge = (sCurrDate - sYearPublished);
	if (sBookAge > 10) {
		cout << "\nThis book is at least 10 years old.\n";
	}
	else {
		cout << "\nThis book is younger than 10 years old.";
	}

	if (sPagesInBook < 100) {
		cout << "\nThis book is a short book.";
	}
	else if (sPagesInBook > 100 && sPagesInBook <= 300) {
		cout << "\nThis book is an average book.";
	}
	else {
		cout << "\nThis book is a long book.\n";
	}
	system("pause");
}

