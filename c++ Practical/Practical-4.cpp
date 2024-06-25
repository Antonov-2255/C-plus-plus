#include <iostream>
#include<conio.h>

using namespace std;

int main() {

    int choice;
    const float PI = 3.141592665;
    float area = 0.0;

    cout << "Choose from following to calculate area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
    cout << "Enter your choices (From 1 to 4): ";
    cin >> choice;

    switch (choice) {

        case 1:
            float radius;
            cout << "\nEnter the radius of the circle: ";
            cin >> radius;
            area = PI * radius * radius;
            break;

        case 2:
            float side;
            cout << "\nEnter the length of the square: ";
            cin >> side;
            area = side * side;
            break;

        case 3:
            float length, width;
            cout << "\nEnter the length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            break;

        case 4:
            float base, height;
            cout << "\nEnter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            break;


        default:
            cout << "\nInvalid choice!" << endl;
            break;
    }

    cout << "The area is: " << area << endl;
    return 0;
}

