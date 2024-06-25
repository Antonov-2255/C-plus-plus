#include<iostream>
using namespace std;

int add(int a, int b)
{
    return(a+b);
}

float add(float n1, float n2, float n3)
{
    return(n1+n2+n3);
}

int main()
{
    cout<<"addition of 2 numbers:"<<add(10,10);
    cout<<"\naddition of 3 numbers:"<<add(20.5,20.5,20.5);
    return 0;
}
