// Perfect_Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>
enum enPerfectNumber { perfect = 1, notperfect = 2 };
int readpositivenumber(string message) {
    int number = 0;
    do {
        cout << message << '\n';
        cin >> number;
    } while (number < 1);
    return number;
}

enPerfectNumber checkperfectnumber(int number) {
    int sum = 0;
    for (int counter = 1; counter <= number; counter++) {
        if (number % counter == 0) {
            if (sum < number) {
                sum += counter;
            }
            else if (sum >= number) {
                break;
            }
        }

    }

    if (sum == number) {

        return enPerfectNumber::perfect;
    }
    else {
        return enPerfectNumber::notperfect;
    }
}

void PrintNumberPerfect(int number) {
    if (checkperfectnumber(number) == enPerfectNumber::perfect) {
        cout << number << " is perfect\n";
    }
    else {
        cout << number << " is not perfect" << endl;
    }
}

int main()
{
    PrintNumberPerfect(readpositivenumber("enter number"));
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
