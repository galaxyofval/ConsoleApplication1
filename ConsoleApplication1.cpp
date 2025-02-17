// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Declaring the variable
    float mm;
    cout << "How many mm is the ocean going up every year?\n";
    // Puts the inputted value into the variable and displays the text showing the increase in height over 5, 7, and 10 years.
    cin >> mm;
    cout << "The ocean level will be " << mm * 5 << " mm higher in 5 years." << endl;
    cout << "The ocean level will be " << mm * 7 << " mm higher in 7 years." << endl;
    cout << "The ocean level will be " << mm * 10 << " mm higher in 10 years." << endl;
}
