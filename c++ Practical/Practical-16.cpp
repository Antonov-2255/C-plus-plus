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
    Object a1;
    Object::display();
    Object a2;
    Object::display();

}


