#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"using setw"<<endl;
    cout<<setw(10)<<11<<endl;
    cout<<setw(10)<<4444<<endl;

    cout<<"using setw and setfill"<<endl;
    cout<<setfill('0')<<endl;
    cout<<setw(10)<<11<<endl;
    cout<<setw(10)<<4444<<endl;


}
