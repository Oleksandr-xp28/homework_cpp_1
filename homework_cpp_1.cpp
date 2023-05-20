/*
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
 feature/hm/ex_1
*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double R1, R2, R3;

    cout << "Enter the values of R1: ";
    cin >> R1;

    cout << "Enter the values of R2: ";
    cin >> R2;

    cout << "Enter the values of R3: ";
    cin >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "The value of resistance R0 is: " << R0 << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
