// MyRound.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float GetFractionPart(float number) {
    return number - int(number);
}
int myRound(float number) {
    int IntPart;
    IntPart = int(number);
    float fraction = GetFractionPart(number);
    if (abs(fraction) >= .5) {
        if (number < 0) {
            return --IntPart;
        }
        else {
            return ++IntPart;
        }    
    }
    else {
        return IntPart;
    }
    /*if (number < 0) {
        if (number - int(number) > -.4) {
            return int(number);
            
        }
        else {
            return  number - (1 + (number - int(number)));
        }
    }
    else {
        if (float(float(number)-int(number)) < .5) {
            return int(number) ;
        }
        else {
            return (number)+(float((1) - float(number - int(number))));
        }
    }*/
}
float ReadNumber() {
    float number;
    cout << "Enter number:\n";
    cin >> number;
    return float(number);
}

int main() {
    float number= ReadNumber();
    cout<<"My round is: " << myRound(number)<<'\n';
    cout << "C++ round is: " << round(number)<<endl;
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
