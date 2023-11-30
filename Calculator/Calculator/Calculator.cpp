// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
#include <limits>
using namespace std;
#include <iostream>
int selected;
double num1,num2,Result;
void InputValueOfNumbers() {
    cout << "The highest value your computer can calculate is " << numeric_limits<int>::max() << "\nAnything higher than this number in any part of the calculation will cause the program to glitch out\n";
    cout << "Which numbers would you like to calculate with?\n";
    cout << "Input your first number\n";
    cin >> num1;
    cout << "You inputted " << num1 << " is that correct?\n";
    cout << "yes(1) " << "No(2)\n";
    cin >> selected;
    if (selected == 1) {

    }
    if (selected == 2) {
        system("CLS");
        InputValueOfNumbers();
    }
    cout << "Input your second number\n";
    cin >> num2;
    cout << "You inputted " << num2 << " is that correct?\n";
    cout << "yes(1) " << "No(2)\n";
    cin >> selected;
    if (selected == 1) {

    }
    if (selected == 2) {
        system("CLS");
        InputValueOfNumbers();
    }
}
void Calculations() {
    if (selected == 1) {

    }
    if (selected == 2) {
        InputValueOfNumbers();
    }

    cout << "What would you like to: Add(1) Divide(2) Multiply(3) Square root(4) \n";
    cin >> selected;
    if (selected == 1) {
        Result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << Result;

    }
    if (selected == 2) {
        Result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << Result;


    }
    if (selected == 3) {
        Result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << Result;

    }
    if (selected == 4) {
        Result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << Result;

        cout << "\nSquare rooted answer: " << sqrt(Result);
    }
    cout << "\nWould you like to calculate somthing else?\n";
    cout << "yes(1) " << "No(2)\n";
    cin >> selected;
    if (selected == 1) {
        system("CLS");
        InputValueOfNumbers();
        Calculations();
    }
    if (selected == 2) {
        system("CLS");
        cout << "Thanks for using me bye!";
        cin;
    }
}
int main()
{
    InputValueOfNumbers();
    Calculations();
}