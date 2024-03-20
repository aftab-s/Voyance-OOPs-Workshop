#include <iostream>
#include <string>

using namespace std;

string reverseString1(string str) {
    int n = str.length();
    string reversed;
    for (int i = n - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); // Read entire line to handle spaces

    string reversed_str = reverseString1(str);

    cout << "Reversed string: " << reversed_str << endl;

    return 0;
}

// Alternatively you can try with the existing string reverse function
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// string reverseString2(string str) {
//     reverse(str.begin(), str.end());
//     return str;
// }

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str); // Read entire line to handle spaces

//     string reversed_str = reverseString2(str);

//     cout << "Reversed string: " << reversed_str << endl;

//     return 0;
// }

// Using resursion (More Complex)
// #include <iostream>
// #include <string>

// using namespace std;

// string reverseStringRecursive(string str, int i) {
//     if (i == str.length()) {
//         return ""; // Base case: return empty string at the end
//     } else {
//         return reverseStringRecursive(str, i + 1) + str[i]; // Recursive call + current character
//     }
// }

// string reverseString3(string str) {
//     return reverseStringRecursive(str, 0);
// }

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str); // Read entire line to handle spaces

//     string reversed_str = reverseString3(str);

//     cout << "Reversed string: " << reversed_str << endl;

//     return 0;
// }

