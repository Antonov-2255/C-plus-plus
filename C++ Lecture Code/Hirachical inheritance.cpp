// C++ program to demonstrate hierarchical inheritance

#include <iostream>
using namespace std;

class Animal
{
   public:
    void info()
    {
        cout << "I am an animal." << endl;
    }
};

class Dog : public Animal
{
   public:
    void bark()
    {
        cout << "I am a Dog. bow bow." << endl;
    }
};

class Cat : public Animal
{
   public:
    void meow()
    {
        cout << "I am a Cat. Meow." << endl;
    }
};

int main()
{

    Dog dog1;
    cout << "Dog Class:" << endl;
    dog1.info();  // Parent Class function
    dog1.bark();

    Cat cat1;
    cout << "\nCat Class:" << endl;
    cat1.info();  // Parent Class function
    cat1.meow();

    return 0;
}

