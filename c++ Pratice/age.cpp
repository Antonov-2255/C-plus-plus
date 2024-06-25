#include<iostream>
#include<string>
using namespace std;

class employee
{
public:
    string name;
    string department;
    int salary;

public:

    void getdata()
    {
        cout<<"Enter NAme Of employee:";
        getline(cin, name);

        cout<<"enter department: ";
        getline(cin, department);

        cout<<"enter salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"name of employee is: "<<name<<endl;
        cout<<"department of employee is: "<<department<<endl;
        cout<<"salary of employee is: "<<salary<<endl;
    }
};

int main()
{
    employee e1;
    cout<<"Enter Employee Detail:"<<endl;
    e1.getdata();
    cout<<" Employee Detail:"<<endl;
    e1.display();

    return 0;

}
