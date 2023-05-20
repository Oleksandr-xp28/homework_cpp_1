/*
 homework_cpp_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

*/

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251); // Встановлюємо кодування консолі Windows-1251
    SetConsoleOutputCP(1251); // Встановлюємо кодування консолі Windows-1251
    double number; // Дробове число, введене користувачем
    int UAH, kopecks; // Окремі гривні та копійки

    cout << "Введіть дробове число: ";
    cin >> number;

    UAH = number; // Виділяємо цілу частину (гривні)
    kopecks = round((number - UAH) * 100); // Виділяємо дробову частину та переводимо в копійки

    cout << "Грошовий формат: " << UAH << " грн " << kopecks << " коп" << endl;

    return 0;
}


//int main()
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
