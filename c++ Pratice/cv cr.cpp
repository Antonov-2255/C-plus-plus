#include<iostream>
using namespace std;

int swap(int, int);

int main()
{
    int a,b;
    cout<<"Enter A and B: "<<endl;
    cin>>a>>b;

    swap(a,b);
    return 0;
}

int swap(int a, int b)
{
    int c=a;
    a=b;
    b=c;

    cout<<a<<" "<<b;
}
