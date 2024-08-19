// GenerateArrayOfKeys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
using namespace std;
#include <string>
enum enChartype {
    smallletter = 1,
    capitalletter = 2,
    digit = 3,
    specialcharacters = 4
};
int RandomNumber(int from, int to) {
    int random = (rand() % (to - from + 1) + from);
    return random;
}

char GetRandomCharacter(enChartype Chartype) {
    switch (Chartype) {
    case enChartype::smallletter:
        return char(RandomNumber(97, 122));
    case enChartype::capitalletter:
        return char(RandomNumber(65, 90));
    case enChartype::digit:
        return char(RandomNumber(48, 57));
    case enChartype::specialcharacters:
        return char(RandomNumber(33, 47));
    default:
        return 'a';
    }
}
int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

string GenerateWord(enChartype Chartype, short length) {
    string word = "";
    for (int i = 1; i <= length; i++) {
        word = word + GetRandomCharacter(Chartype);
    }
    return word;
}

string GenerateKey() {
    string key = "";
    key = key + GenerateWord(enChartype::capitalletter, 4) + "-";
    key = key + GenerateWord(enChartype::capitalletter, 4) + "-";
    key = key + GenerateWord(enChartype::capitalletter, 4) + "-";
    key = key + GenerateWord(enChartype::capitalletter, 4) ;
    return key;
}



void GenerateArrayOfKeys(string arr[100],short number) {
    for (int i = 1; i <= number; i++ ) {
        arr[i] = GenerateKey();
    }
}

void PrintArrayKeys(string arr[100],short number) {
    for (int i = 1; i <= number; i++) {
        cout << "key[" << i << "] " <<arr[i] << endl;
    }
}
int main() {
    
    srand((unsigned)time(NULL));
    string arr[100];
    int number;
    number = ReadPositiveNumber("Enter the positive number: ");
    GenerateArrayOfKeys(arr, number);
    PrintArrayKeys(arr,number);
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
