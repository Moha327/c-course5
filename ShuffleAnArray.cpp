// ShuffleAnArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
#include<cmath>

int readpositivenumber(string message) {
    int number = 0;
    do {
        cout << message << '\n';
        cin >> number;
    } while (number < 1);
    return number;
}

void swap(int& A, int& B) {
    int temp = 0;
    temp = A;
    A = B;
    B = temp;
}

void FillRandomArray1toN(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        arr[i] = i + 1;
    }
}

int RandomNumber(int from, int to) {
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}


void ShuffleArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength ; i++) {
        swap(arr[RandomNumber(1, arrlength) - 1], arr[RandomNumber(1, arrlength) - 1]);
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
    srand((unsigned)time(NULL));
    int arr[100], arrlength;
    arrlength = readpositivenumber("Enter number:");
    FillRandomArray1toN(arr,arrlength);
    PrintRandomNumber(arr,arrlength);
    ShuffleArray(arr,arrlength);
    PrintRandomNumber(arr, arrlength);
}
    /*PrintShuffleRandomNumber(arr,arr2,arr3,arrlength,Min,Max);
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
