#include<iostream>
using namespace std;

class Base_class
{
public:
    void display1()
    {
        cout<<"it is first function of base class"<<endl;
    }
};

class Base_class2
{
public:
    void display2()
    {
       cout<<"it is second function of base class"<<endl;
    }
};

class derived: public Base_class, public Base_class2
{
    public:
    void display3()
    {
       cout<<"it is function of derived class"<<endl;
    }

};

int main()
{
    derived d;
    d.display1();
    d.display2();
    d.display3();
}
