/*
* Author: Kritika Singh
 * Created on June 10, 2022, 2:16 p.m.
 * Version: 1.0
 * Purpose: Using Functions to calculate and convert temperature
 * Description:
 * - The program will prompt the user to enter a temperature value between -30 and 30 degree Celsius inclusive.
 * - It will calculate the value in Fahrenheit
 * - Then, it will display a message according to the range that the temperature is within.
 */

#include <iostream>
#include "functions.h"
using namespace std;

double temp = 0;

int main()
{
    getNumber();

    validRange(-20,20);

    CalcFahrenheit(temp);

    tempProcessing();

    return 0;
}