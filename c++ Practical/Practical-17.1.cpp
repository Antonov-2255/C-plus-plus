/*AIM:-
Create class “Person” having a two data members as person name and nationality. Also create two
constructors for this class in which one has two arguments and second has one argument. also take input from user and display it output*/


#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    string name;
    string nationality;

public:
    Person(string n, string nat)
    {
        name = n;
        nationality = nat;
    }

    Person(string n)
    {
        name = n;
        nationality = "Unknown";
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Nationality: " << nationality << endl;
    }
};

int main()
{
    string name, nationality;

    cout << "Enter the name of Person 1: ";
    cin >> name;
    cout << "Enter the nationality of Person 1: ";
    cin >> nationality;

    Person p1(name, nationality);

    cout << "\nEnter the name of Person 2: ";
    cin >> name;

    Person p2(name);

    cout << "\nPerson 1 Information:" << endl;
    p1.display();

    cout << "\nPerson 2 Information:" << endl;
    p2.display();

    return 0;
}
