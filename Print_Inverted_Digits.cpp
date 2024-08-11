// Print_Inverted_Digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>

int readpositivenumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

int PrintDigitsNumberInReverseShape(int number) {
    int reminder = 0, number2 = 0;
    while (number) {
        reminder = number % 10;
        number = number / 10;
        number2 = number2 * 10 + reminder;
    }
    return number2;
}


int main()
{
    int number = PrintDigitsNumberInReverseShape(readpositivenumber("Enter positive number:"));
    cout << "Reverse number is:\n";
    cout << number << endl;
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
