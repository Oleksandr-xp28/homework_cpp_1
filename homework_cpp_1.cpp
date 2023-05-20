/*
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double distance; // Length of the course in meters
    int minutes, seconds; // Time in minutes and seconds
    int totalSeconds; // Total time in seconds
    double speedKmH; // Running speed in kilometers per hour

    cout << "Calculating the running speed" << endl; // Output the result
    cout << "Enter the length of the course (meters): "; // Input the length of the course in meters
    cin >> distance; // Input the length of the course in meters

    cout << "Enter the time (min. sec.): "; // Input time in minutes and seconds
    cin >> minutes >> seconds;  // Input time in minutes and seconds

    totalSeconds = minutes * 60 + seconds; // Calculate total time in seconds
    speedKmH = distance / 1000 / (totalSeconds / 3600.0); // Calculate running speed in kilometers per hour

    cout << "Distance: " << distance << " m" << endl; // Output the result
    cout << "Time: " << minutes << " min " << seconds << " sec = " << totalSeconds << " sec" << endl; // Output the result
    cout << "You ran at a speed of " << speedKmH << " km/h" << endl; // Output the result

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
