#include<iostream>
using namespace std;

class abc
{
public:
    static int count;

public:
    abc()
    {
        count++;
    }
    static void display()
    {
        cout<<"Number of objects are: "<<count<<endl;
    }
};

int abc::count=0;

int main()
{
    abc a1;
    abc::display();
}
