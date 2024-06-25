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
    Person p1("varis", "american");
    Person p2("john cena");

    cout << "Person 1 Information:" << endl;
    p1.display();

    cout << "\nPerson 2 Information:" << endl;
    p2.display();

    return 0;
}
