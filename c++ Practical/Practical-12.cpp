#include <iostream>
#include <string>
using namespace std;

class Employee
{

private:
    string name;
    string department;
    double salary;

public:
    void Data()
    {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter department: ";
        getline(cin, department);

        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee employee;

    cout << "Enter details for the employee:" << endl;
    employee.Data();

    cout << "\nEmployee Information:\n";
    employee.displayData();

    return 0;
}
