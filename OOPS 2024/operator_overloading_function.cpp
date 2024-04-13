#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Name;
    int Number;

    // Constructor with proper member variable initialization
    Student(string name1, int number1) {
        Name = name1;
        Number = number1;
    }

    // Overloaded insertion operator (`<<`) for cleaner output
    // if its "void" instead of "ostream", you can only use << for one object
    friend ostream& operator<<(ostream& COUT, const Student& Sn) {
        // friend function has access to private and protected members of a class
        COUT << "Name: " << Sn.Name << endl;
        COUT << "Roll No: " << Sn.Number << endl;
        return COUT;
    }
};

int main() {
    Student S1("Jane", 7);
    cout << S1 << endl; // Using the overloaded insertion operator
    // operator<<(cout,S1); --- Another way of invoking the operator overloading function

    return 0;
}