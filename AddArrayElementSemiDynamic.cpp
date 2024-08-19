// AddArrayElementSemiDynamic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int ReadPositiveNumber() {
    int number = 0;
    cout << "Enter number you want: ";
    cin >> number;
    return number;
}

void ReadArrayNumbers(int arr[100], int& arrlength, int number) {
    arrlength++;
    arr[arrlength - 1] = number;
}

void ReadNumbers(int arr[100],int& arrlength) {
    bool num =true;
    do {
        ReadArrayNumbers(arr, arrlength, ReadPositiveNumber());
        cout << "Do you want to add number to array: No[0] Yes [1]: ";
        cin >> num;
    } while (num);
}

void PrintArray(int arr[100], int arrlength) {
    for (int i = 0; i <= arrlength - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], arrlength=0;
    ReadNumbers(arr, arrlength);
    cout << "Array Elements are: ";
    PrintArray(arr, arrlength);
    cout << "Array length is: "<<arrlength;
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
