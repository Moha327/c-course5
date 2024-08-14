// FindPrimeNumberFromRandomNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>
enum enNumbertype { prime = 1, notprime = 2 };
int RandomNumber(int from, int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

int readpositivenumber(string message) {
    int number = 0;
    do {
        cout << message << '\n';
        cin >> number;
    } while (number < 1);
    return number;
}

void ReadArrayWithRandomNumbers(int arr[100], int& arrlength) {
    arrlength = readpositivenumber("Enter number of elements");
    for (int i = 0; i <= arrlength - 1; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

enNumbertype checkprimenumber(int& number) {
    int counter = 2;
    int M = round(number / 2);
    for (int counter = 2; counter <= M; counter++) {
        if (number % counter == 0) {
            return enNumbertype::notprime;
        }
    }
    return enNumbertype::prime;
    
}

void PrintPrimeNumbers(int arr[100],int arrlength, int arr2[100], int &arrlength2) {
    int counter = 0;
    for (int i = 0; i < arrlength; i++) {
        if (checkprimenumber(arr[i]) == enNumbertype::prime) {
            arr2[counter] = arr[i];
            counter++;
        }
    }
    arrlength2=--counter;
}

void PrintRandomNumber(int arr[100], int arrlength) {
    for (int i = 0; i <= arrlength - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], arrlength;
    srand((unsigned)time(NULL));
    ReadArrayWithRandomNumbers(arr,arrlength);
    int arr2[100], arrlength2=0;
    PrintPrimeNumbers(arr, arrlength, arr2, arrlength2);
    PrintRandomNumber(arr,arrlength);
    
    PrintRandomNumber(arr2, arrlength2);
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
