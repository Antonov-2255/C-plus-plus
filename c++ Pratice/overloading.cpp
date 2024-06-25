#include<iostream>
using namespace std;

int add(int a , int b)
{
    return(a+b);
}

float add(float n1, float n2, float n3)
{
    return(n1+n2+n3);
}

int main()
{
    cout<<"addition of 2 nubers: "<<add(74,52)<<endl;
    cout<<"addition of 3 nubers: "<<add(7.4,5.2,4.4)<<endl;
    return 0;

}
