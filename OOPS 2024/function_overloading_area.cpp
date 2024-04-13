#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14159265359;

// Function to calculate the area of a triangle
float area(long base, long height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
int area(int length, int width) {
    return length * width;
}

// Function to calculate the area of a circle
float area(float radius) {
    return PI * pow(radius, 2);
}

int main() {
    long base, height;
    int length, width;
    float radius;

    // Input for triangle
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height) << endl;

    // Input for rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;

    // Input for circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    return 0;
}
