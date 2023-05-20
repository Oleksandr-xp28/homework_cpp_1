/*
 Homework 2 Task 1.
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
 feature/hm/task_1
*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() { // Main function
    SetConsoleCP(1251); SetConsoleOutputCP(1251); // Cyrillic support

    int seconds; // Time in seconds
    int minutes, hours; // Time in minutes and hours

    std::cout << "¬вед≥ть час у секундах: "; // Prompt user for input
    std::cin >> seconds; // Input time in seconds

    minutes = seconds / 60; // Convert seconds to minutes
    hours = minutes / 60; // Convert minutes to hours
    minutes = minutes % 60; // Calculate remaining minutes

    std::cout << "„ас у годинах ≥ хвилинах: " << hours << " годин " << minutes << " хвилини" << endl; // Output result

    return 0; // Exit program
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
