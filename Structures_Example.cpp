// Structures_Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct StOwner {
	string FullName;
	string Phone;
	int Age;
};


struct car {
    
	string Brand;
	string Model;
	int year;
	StOwner Onwer;

};


int main()
{
	car Mycar1, Mycar2;
	Mycar1.Onwer.FullName = "Bakry Rihawi";
	Mycar1.Onwer.Phone = "0958919932";
	Mycar1.Brand = "BWM";
	Mycar1.year = 2000;

	cout << Mycar1.year;
}
