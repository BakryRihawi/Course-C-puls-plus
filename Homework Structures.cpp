#include <iostream>
#include <string>
using namespace std;

struct Salary {

	int Monthly_Salary;
	int Yearly_Salary;

};


struct Personal_Identification {

	string FullName;
	int Age;
	string City;
	string Countery;
	Salary  salary;
	char Gender;
	bool Married;
};


int main()
{
	Personal_Identification X1;
	cout << "Enter the FullName\t";
	getline(cin, X1.FullName);
	cout << "Enter the Age\t";
	cin >> X1.Age;
	cout << "Enter the City\t";
	cin >> X1.City;
	cout << "Enter the Country\t";
	cin >> X1.Countery;
	cout << "Enter the Monthly Salary\t";
	cin >> X1.salary.Monthly_Salary;
	cout << "Enter the Yearly Salary\t";
	cin >> X1.salary.Yearly_Salary;
	cout << "Enter the Gender\t";
	cin >> X1.Gender;
	cout << "Enter the Married\t";
	cin >> X1.Married;
	cout << endl;
	cout << "******************************************\n";
	cout << "Name: " << X1.FullName << endl;
	cout << "Age: " << X1.Age << " Years\n";
	cout << "City: " << X1.City << endl;
	cout << "Country " << X1.Countery << endl;
	cout << "Monthly salary: " << X1.salary.Monthly_Salary << endl;
	cout << "Yearly salary: " << X1.salary.Yearly_Salary << endl;
	cout << "Gender: " << X1.Gender << endl;
	cout << "Married: " << X1.Married << endl;
	cout << "******************************************\n";



}