// Homework 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string Name;
    int Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearlySalary;
    char Gender;
    bool Married;

    cout << "Please enter your name:\t ";
    cin >> Name;
    cout << "Please enter your age:\t ";
    cin >> Age;
    cout << "Please enter your city:\t ";
    cin >> City;
    cout << "Please enter your country:\t ";
    cin >> Country;
    cout << "Please enter your monthlySalary:\t ";
    cin >> MonthlySalary;
    cout << "Please enter your gender:\t ";
    cin >> Gender;
    cout << "Please enter your married:\t ";
    cin >> Married;

    cout << "******************************\n";
    cout << "Name: " << Name << "\n";
    cout << "Age: " << Age << "\n"; 
    cout << "City: " << City << "\n"; 
    cout << "Country: " << Country << "\n";
    cout << "MonthlySalary: " << MonthlySalary << "\n";
    cout << "YearlySalary: " << MonthlySalary*12 << "\n";
    cout << "Gender: " << Gender << "\n";
    cout << "Married: " << Married << "\n";
    cout << "******************************\n";

    
}
