#include <iostream>
using namespace std;

class FactorialPrimeChecker {
private:
    int number;

    // Function to calculate factorial
    int factorial(int n) {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }

    // Function to check if a number is prime
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

public:
    // Constructor
    FactorialPrimeChecker(int num) {
        number = num;
    }

    // Function to compute factorial
    int computeFactorial() {
        return factorial(number);
    }

    // Function to check if factorial is prime
    bool isFactorialPrime() {
        int fact = computeFactorial();
        return isPrime(fact);
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Create an object of the class
    FactorialPrimeChecker fpc(n);

    // Calculate factorial
    int fact = fpc.computeFactorial();

    // Check if factorial is prime
    if (fpc.isFactorialPrime())
        cout << "Factorial of " << n << " (" << fact << ") is prime." << endl;
    else
        cout << "Factorial of " << n << " (" << fact << ") is not prime." << endl;

    return 0;
}
