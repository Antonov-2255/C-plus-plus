#include<iostream>
using namespace std;

int power(int x,int y)
{
    int pow=1, i;

    if(y==0)
    {
        return 1;
    }

    for(i=1;i<=y;i++)
    {
        pow=pow*x;
    }
    return pow;
}

int main()
{
    int x, y;

    cout<<"Enter the base and power"<<endl;
    cin>>x>>y;

    cout<<"The value of "<<x<<"^"<<y<<" is "<<power(x,y)<<endl;
    return 0;
}


