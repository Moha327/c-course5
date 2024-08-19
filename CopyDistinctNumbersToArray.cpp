// CopyDistinctNumbersToArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void ReadArrayWithRandomNumbers(int arr[100], int& arrlength) {
    arrlength = 9;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 30;
    arr[4] = 30;
    arr[5] = 30;
    arr[6] = 70;
    arr[7] = 80;
    arr[8] = 90;  
}
void PrintArray(int arr[100], int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        cout << arr[i] << " ";
    }
}

short FindNumberPositiveInArray(int arr[100], int number, int arrlength) {
    for (int i = 0; i < arrlength; i++) {
        if (number==arr[i]) {
            return i;
        }
    }
    return -1;
}

bool IsNumberInArray(int arr[100], int number, int arrlength) {
    return FindNumberPositiveInArray(arr, number, arrlength)!= -1;
}
void ReadArrayDistinctNumbers(int arr[100], int number,int& arrlength) {
    arrlength++;
    arr[arrlength - 1] = number;
}

void ReadArray(int arr[100], int arrcopied[100], int arrlength, int& arrcopiedlength) {
    for (int i = 0; i < arrlength; i++) {
        if (!IsNumberInArray(arrcopied, arr[i], arrcopiedlength)) {
            ReadArrayDistinctNumbers(arrcopied, arr[i], arrcopiedlength);
        }
    }
}

int main() {
    int arr[100], arrlength=0, arrcopied[100], arrcopiedlength = 0;
    ReadArrayWithRandomNumbers(arr,arrlength);
    cout << "Print array elements:\n";
    PrintArray(arr, arrlength);
    ReadArray(arr, arrcopied, arrlength, arrcopiedlength);
    cout<<"\n\nPrint array distinct elements:\n" ;
    
    PrintArray(arrcopied, arrcopiedlength);
    cout << endl;
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
