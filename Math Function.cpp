// Math Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{    // إيجاد الجذؤ للعدد 
    int x = 64;
    float y;
    
    cout << "squair root value of 64 :" << sqrt(x) << endl;
    y = sqrt(50);
    cout << "y= " << y << endl;

    cout << "rounding value: " << round(y) << endl;    //  تقريب للأعلى أو للأسفل حسب الأقرب
    cout << "ceiling value: " << ceil(-y) << endl;     //  تقريب العدد للأعلى 
    cout << "flooring value: " << floor(-y) << endl;   //  تقريب العدد للأسفل 
    cout << "absolute value: " << abs(-x) << endl;     //  إيجاد القيمة المطلقة   
    cout << "power value: " << pow(2, 3) << endl;    //  إيجاد القوة للعدد







}
