/*
 * Author: Kritika Singh
 * Created on June 10, 2022, 2:16 p.m.
*/
#include <iostream>
#include "functions.h"
using namespace std;

double temperature;
double conversion;

//function to get an input
double getNumber()
{
    cout<<"Please Enter a valid Temperature(-30c to 30c):";
    cin>>temperature;

    while(cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Out of range!!" << endl;
        cout << "It must be a numeric value, try again:" << endl;
        cin >> temperature;
    }

    return temperature;
}

double validRange(double min,double max)
{
    while(temperature > max || temperature < min)
    {
        cout<<"Out of range, value must be between "<< min <<" and "<<max<<":";
        cin >> temperature;
    }
}

//function to convert temperature from Celsius to Fahrenheit
double CalcFahrenheit(double x)
{
    conversion = (x * 1.8)+32;
    cout<< "Temperature in Celsius is " << x << " degrees Fahrenheit." <<endl;
    return conversion;
}

//function to display message based on temperature
void tempProcessing()
{
    if(conversion >= -22 && conversion < -4)
        cout << "Cold Warning, Freezing Alert!!!!" << endl;

    else if(conversion >= -4 && conversion < 34)
        cout << "Welcome to the Canadian Winter." << endl;

    else if(conversion >= 34 && conversion < 68)
        cout << "Welcome to the Canadian Spring." << endl;

    else if(conversion >= 68 && conversion < 86)
        cout << "Welcome to the Canadian Summer." << endl;
}
