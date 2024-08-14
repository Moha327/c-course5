// FindMinRandomNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int RandomNumber(int from, int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}
int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << '\n';
        cin >> number;
    } while (number < 1);
    return number;
}

void ReadArrayWithRandomNumbers(int arr[100], int& arrlength) {
    arrlength = ReadPositiveNumber("Enter number of elements");
    for (int i = 0; i <= arrlength-1; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintRandomNumber(int arr[100], int arrlength) {
    for (int i = 0; i <= arrlength-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int FindMinRandomNumber(int arr[100], int arrlength) {
    int Min = 0;
    Min = arr[0];
    for (int i = 0; i <= arrlength-1; i++) {
        if (arr[i]<Min) {
            Min = arr[i];
        }
    }
    return Min;
}
int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    
    ReadArrayWithRandomNumbers(arr, arrlength);
    cout << "Array Elements:";
    PrintRandomNumber(arr, arrlength);
    cout << "Minimum element of array is : ";
    cout << FindMinRandomNumber(arr, arrlength);
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
