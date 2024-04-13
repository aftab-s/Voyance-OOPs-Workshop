#include <iostream>
#include <string>

using namespace std;

class Student {

public:

    string Name;
    int Number;

    Student(string name1, int number1) {
        Name = name1;
        Number = number1;
    }


    // Overloaded insertion operator (`<<`) for cleaner output
    // if its "void" instead of "ostream", you can only use << for one object
    // return_type function_name(arhuments){ --; return --; }
    friend ostream& operator<<(ostream& COUT, const Student& Sn) {
        // friend function has access to private and protected members of a class
        COUT << "Name: " << Sn.Name << endl;
        COUT << "Number: " << Sn.Number << endl;
        return COUT;
    }
};

int main() {
    Student S1("Karthika", 100);
    cout << S1 << endl; // Using the overloaded insertion operator
    // operator<<(cout,S1); --- Another way of invoking the operator overloading function
    return 0;
}