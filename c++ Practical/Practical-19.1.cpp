#include <iostream>
using namespace std;
const double pi = 3.14;

class Circle
{
public:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area()
    {
        return pi * radius * radius;
    }

    int operator++() // Pre-increment operator
    {
        ++radius;
    }

    Circle operator++(int) // Post-increment operator
    {
        Circle temp = *this;
        ++radius;
        return temp;
    }
};

int main()
{
    double radius1, radius2;

    cout << "Enter the radius of the first circle: ";
    cin >> radius1;

    cout << "Enter the radius of the second circle: ";
    cin >> radius2;

    Circle c1(radius1);
    Circle c2(radius2);

    cout << "\nPre-incrementing the radius of the first circle..." << endl;
    ++c1;
    cout << "The area of the first circle after pre-increment is " << c1.area() << endl;

    cout << "\nPost-incrementing the radius of the second circle..." << endl;
    c2++;
    cout << "The area of the second circle after post-increment is " << c2.area() << endl;

    if (c1.radius == c2.radius)
    {
        cout << "\nThe two circles are same after the increments." << endl;
    } else
    {
        cout << "\nThe two circles are NOT same after the increments." << endl;
    }

    return 0;
}
