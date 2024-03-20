#include <iostream>
#include <string>

using namespace std;

// Function to calculate string length recursively
int stringLength(const string& str, int i = 0) {
    if (str[i] == '\0') { // Base case: null terminator reached
        return 0;
    } else {
        return 1 + stringLength(str, i + 1); // Recursive call with the next character
    }
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Read entire line to handle spaces

    int length = stringLength(str);
    cout << "Length of the string: " << length << endl;

    return 0;
}