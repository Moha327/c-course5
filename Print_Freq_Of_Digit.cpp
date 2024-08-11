// Print_Freq_Of_Digit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << "\n";
        cin >> number;
    } while (number <= 0);
    return number;
}

int CountFreqNumber(int number, short freq) {
    int counter = 0, reminder = 0;
    while (number > 0) {
        reminder = number % 10;
        if (reminder == freq) {
            counter += 1;
        }
        number = number / 10;
    }
    return counter;
}

int main()
{
    int number = ReadPositiveNumber("Please enter number:");
    short freq = ReadPositiveNumber("Enter digit:");
    cout << "Digit " << freq << " Frequency is " << CountFreqNumber(number, freq) << " Time(s)"<<endl;
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
