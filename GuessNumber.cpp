// GuessNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>  
using namespace std;

enum enColorStatus {
    Low = 1,
    High=2,
    Equal=3
};

int RandomNumber(int from, int to) {
    int random = 0;
    random = rand() % ((to - from + 1) + from);
    return random;
}

int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < 1);
    return number;
}

enColorStatus CheckColorStatus(int& number, int& number2) {
    enColorStatus status;
    if (number<number2) {
        system("color A7");
        return enColorStatus::Low;
    }
    else if (number>number2) {
        system("color B7");
        return enColorStatus::High;
    }
    else  {
       cout <<number<< " was the number\n";
       system("color E7");
       return enColorStatus::Equal;   
    }
}

void PrintResult(enColorStatus color,int number) {
    switch (color) {
        case enColorStatus::Low:
            cout << "Low\n";
            break;
        case enColorStatus::High:
            cout << "High\n";
            break;
        case enColorStatus::Equal:
            cout << number << " was the number\n";
            break;
    }  
}

int main() {
    int number, number2;
    number = ReadPositiveNumber("Guess number:");
    srand((unsigned)time(NULL));
    number2=RandomNumber(1, 100);
    PrintResult(CheckColorStatus(number, number2),number);
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
