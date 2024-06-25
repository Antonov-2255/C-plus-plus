#include<iostream>
using namespace std;

class two;
class one;

class one
{
private:
    int c;

public:
    void getdata()
    {
        cout << "Enter a value for first class: ";
        cin >> c;
    }

    friend int add(one a, two b);
};

class two
{
private:
    int d;

public:
    void putdata()
    {
        cout << "Enter a value for second class: ";
        cin >> d;
    }

    friend int add(one a, two b);
};

int add(one a, two b)
{
    return a.c + b.d;
}

int main()
{
    one obj1;
    two obj2;

    obj1.getdata();
    obj2.putdata();

    int sum = add(obj1, obj2);

    cout << "Sum =  " << sum << endl;

    return 0;
}
