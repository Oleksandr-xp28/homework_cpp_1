/*
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

*/

#include <iostream> // Allows program to perform input and output
#include <windows.h> // Allows program to use system("pause")
#include <cmath> // Allows program to use pow()
#include <iomanip> // Allows program to use setprecision()
using namespace std; // Program uses names from the std namespace

int main() { // Function main begins program execution
    SetConsoleCP(1251); // Set the console code page to 1251 (Cyrillic)
    SetConsoleOutputCP(1251); // Set the console code page to 1251 (Cyrillic)

    double v; // Initial velocity or speed
    double t; // Time
    double a; // Acceleration
    double S; // Distance traveled

    cout << "Введіть початкову швидкість: "; // Prompt user to enter the initial velocity
    cin >> v; // Read the initial velocity

    cout << "Введіть час: "; // Prompt user to enter the time
    cin >> t; // Read the time

    cout << "Введіть прискорення: "; // Prompt user to enter the acceleration
    cin >> a;   // Read the acceleration

    S = v * t + (a * t * t) / 2; // Calculate the distance traveled

    cout << "Пройдена відстань становить: " << S << endl; // Display the distance traveled

    return 0; // Indicate the program ended successfully
}


// Path: homework_cpp_2.cpp
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
