#include <iostream>

using namespace std;

inline int max_of_three(int a, int b, int c) {
  // Use nested if-else to find the maximum
  if (a >= b) {
    return (a >= c) ? a : c;
  } else {
    return (b >= c) ? b : c;
  }
}

int main() {
  int num1, num2, num3;

  cout << "Enter three numbers: ";
  cin >> num1 >> num2 >> num3;

  int largest = max_of_three(num1, num2, num3);

  cout << "The largest number is: " << largest << endl;

  return 0;
}