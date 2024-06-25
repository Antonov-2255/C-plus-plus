#include<iostream>
using namespace std;

class abc
{
private:
    int a =74;
    char ch ='q';

public:
    friend void display (abc obj);

};

void display(abc obj)
{
    cout<<obj.a<<endl;
    cout<<obj.ch<<endl;
}

int main()
{
    abc obj;
    display(obj);

    return 0;
}
