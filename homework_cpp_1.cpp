/*
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() // Function header
{ 
    int days; // Number of days
    int weeks, remainingDays; // Number of weeks and remaining days

    cout << "Enter the number of days: "; // Prompt user for number of days
    cin >> days; // Read number of days

    weeks = days / 7; // Calculate the number of full weeks
    remainingDays = days % 7; // Calculate the remaining days

    cout << "Number of weeks: " << weeks << endl; // Display the number of weeks
    cout << "Number of remaining days: " << remainingDays << endl; // Display the number of remaining days

    return 0; // Indicate that program terminated successfully
} // end function main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
