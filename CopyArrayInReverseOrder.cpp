// CopyArrayInReverseOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintNumbers(int arr[100], int arrlength, int arr2[100]) {
    for (int i = 0; i < arrlength; i++) {
        arr2[i] = arr[arrlength-1-i];
    }
    
}

void PrintRandomNumber(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], arrlength;
    srand((unsigned)time(NULL));
    ReadArrayWithRandomNumbers(arr, arrlength);
    PrintRandomNumber(arr, arrlength);
    int arr2[100], arrlength2 = 0;
    PrintNumbers(arr, arrlength,arr2);
    PrintRandomNumber(arr2, arrlength);
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
