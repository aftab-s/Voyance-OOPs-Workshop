#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overloaded unary operator --
    Date operator--() {
        if (day == 1) {
            if (month == 1) {
                // If it's January 1st, go to December 31st of the previous year
                day = 31;
                month = 12;
                year--;
            } else {
                // Otherwise, go to the last day of the previous month
                switch (month - 1) {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                        day = 31;
                        break;
                    case 4: case 6: case 9: case 11:
                        day = 30;
                        break;
                    case 2:
                        // Handle February separately for leap year
                        day = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
                        break;
                }
                month--;
            }
        } else {
            day--;
        }
        return *this;
    }

    void display() {
        cout << "Previous date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    // Create a Date object
    Date today(15, 4, 2024);

    // Display the current date
    cout << "Current date: ";
    today.display();

    // Use the overloaded -- operator to find the previous date
    --today;

    // Display the previous date
    today.display();

    return 0;
}
