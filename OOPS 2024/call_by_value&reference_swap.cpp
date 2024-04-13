#include <iostream>
using namespace std;

// Function to swap two variables using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two variables using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping using call by value
    swapByValue(num1, num2);

    cout << "After swapping using call by value:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Reset values
    num1 = 5;
    num2 = 10;

    // Swapping using call by reference
    swapByReference(num1, num2);

    cout << "After swapping using call by reference:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}