#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime (iterative)
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Not prime if divisible by any number from 2 to its square root
        }
    }
    return true; // Prime if not divisible by any number in the loop
}

int main() {
    int limit;

    cout << "Enter the upper limit (positive integer): ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << ":" << endl;

    for (int num = 2; num <= limit; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
