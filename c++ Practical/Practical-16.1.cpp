/* AIM :-
write a program to count number of objects created by user
(take object as input from user) for particular class using constructor*/

#include<iostream>
using namespace std;

class Object
{
public:
    static int count;

public:
    Object()
    {
        count++;
    }

    static void display()
    {
        cout << "Number of Objects are: " << count << endl;
    }
};

int Object::count = 0;

int main()
{
    int numObjects;

    cout << "Enter the number of objects you want to create: ";
    cin >> numObjects;

    for (int i = 0; i < numObjects; i++)
    {
        Object obj;
    }

    Object::display();

    return 0;
}
