#include <iostream>
#include <string>
using namespace std;

class Sales
{
private:
    string name;
    int sales;

public:
    void getInput()
    {
        cout << "Enter name of salesman: ";
        getline(cin, name);
        cout << "Enter sales of salesman: ";
        cin >> sales;
    }

    void calculation()
    {
        double commission;
        if (sales >= 25000)
        {
            commission = sales * 0.01;
        }
        else
        {
            commission = sales * 0.005;
        }
        cout << "Commission for " << name << " is Rs. " << commission << endl;
    }
};

int main()
{
    Sales sales1;
    sales1.getInput();
    sales1.calculation();
    return 0;
}
