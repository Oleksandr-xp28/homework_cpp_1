/*
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
 feature/hm/ex_2
*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    double L; // The length of the circle
    double R, S; // The radius and area of the circle
    double pi = 3.14159; // The value of pi

    cout << "Введіть довжину кола: ";
    cin >> L;

    R = L / (2 * pi); // Calculate the radius using the formula L = 2 * pi * R
    S = pi * pow(R, 2); // Calculate the area using the formula S = pi * R^2

    cout << "Радіус кола дорівнює: " << R << endl;
    cout << "Площа круга дорівнює: " << S << endl;

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
