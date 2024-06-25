#include<iostream>
#include<conio.h>
using namespace std;

int swap(int &, int&);

int main()
{
    int a,b;
    cout<<"enter A and B:";
    cin>>a>>b;

    swap(a,b);
    return 0;
}

int swap(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;

    cout<<"after Swaping"<<a<<" "<<b;
}
