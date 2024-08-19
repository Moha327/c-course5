// FindNumberInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    for (int i = 0; i <= arrlength - 1; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintRandomNumber(int arr[100], int arrlength) {
    for (int i = 0; i <= arrlength - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int FindNumber(int arr[100], int arrlength, int& number) {
    int index = 0;
    for (int i = 0; i <= arrlength - 1; i++) {
        if (arr[i] == number) {
            return 1;
        }
    }
    return -1;
}

bool PrintResult(int arr[100], int arrlength, int number) {
    return FindNumber(arr, arrlength, number) != -1;
    
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrlength, number;
    arrlength = ReadPositiveNumber("Enter number of elements");
    cout << "Array Elements:";
    ReadArrayWithRandomNumbers(arr, arrlength);
    PrintRandomNumber(arr, arrlength);
    number = ReadPositiveNumber("Enter number of elements");
    cout<<"Number is looking for is: "<<number << endl;
    if (!PrintResult(arr,arrlength, number)) {
        cout << "No,number isn't found :(\n";
    }
    else {
        cout << "Yes,number is found :)\n";
    }
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
