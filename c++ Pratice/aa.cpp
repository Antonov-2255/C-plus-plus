#include<iostream>
using namespace std;

class Animal
{
public:
    void info()
    {
        cout<<"i am animal"<<endl;
    }
};

class dog:public Animal
{
public:
    void bark()
    {
        cout<<"i am the dog."<<endl;
    }
};

class cat:public Animal
{
public:
    void meow()
    {
        cout<<"i am the cat"<<endl;
    }
};

int main()
{
    dog d1;
    cout<<"dog class"<<endl;
    d1.info();
    d1.bark();

    cat c1;
    cout<<"cat class"<<endl;
    c1.info();
    c1.meow();

}
