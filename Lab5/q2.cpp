#include <iostream>
using namespace std;
int area(int side) {
    return side * side;
}

int area(int length, int breadth) {
    return length * breadth;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    int side, length, breadth;
    double radius;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "\nArea of square = " << area(side);
    cout << "\nArea of rectangle = " << area(length, breadth);
    cout << "\nArea of circle = " << area(radius);

    return 0;
}