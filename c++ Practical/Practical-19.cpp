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

    int operator==(Circle);

};

int Circle::operator==(Circle c)
{

}
int main()
{
    double radius1, radius2;

    cout << "Enter the radius of the first circle: ";
    cin >> radius1;

    cout << "Enter the radius of the second circle: ";
    cin >> radius2;

    Circle c1(radius1);
    Circle c2(radius2);

    cout << "The area of the first circle is " << c1.area() << endl;

    cout << "The area of the second circle is " << c2.area() << endl;

    if (c1 == c2)
    {
        cout << "The two circles are equal in radius" << endl;
    }
    else
    {
        cout << "The two circles are NOT equal in radius" << endl;
    }

   return 0;
}
