// Homework 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string Name = "Bakry Rihawi";
	int Age = 24;
	string City = "Aleppo";
	string Country = "Syria";
	int MonthlySalary = 500000;
	char Gemder = 'M';
	bool Married = false;
   cout << "*******************************\n";
   cout << "Name: " << Name << "\n";
   cout << "Age: " << Age << " years\n";
   cout << "City: " << City << "\n";
   cout << "Country: " << Country << "\n";
   cout << "MonthlySalary:" << MonthlySalary << "\n";
   cout << "Yearlysalary:" <<MonthlySalary*12  << "\n";
   cout << "Gemder: " << Gemder << "\n";
   cout << "Married: " << Married << "\n";
   cout << "*******************************\n";
}

