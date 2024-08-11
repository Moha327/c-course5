// IsPrime_Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>
enum enNumbertype { prime = 1, notprime = 2 };
int readpositivenumber(string message) {
    int number = 0;
    do {
        cout << message << '\n';
        cin >> number;
    } while (number < 1);
    return number;
}

enNumbertype checkprimenumber(int number) {
    int counter = 2;
    int M = round(number / 2);
    for (int counter = 2; counter <= M; counter++) {
        if (number % counter == 0) {
            return enNumbertype::notprime;
        }
    }
    return enNumbertype::prime;
}

void PrintPrimeNumbers(int number) {
    for (int i = 1; i <= number; i++) {
        if (checkprimenumber(i) == enNumbertype::prime) {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPrimeNumbers(readpositivenumber("enter number"));
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
