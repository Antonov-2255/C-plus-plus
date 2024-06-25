#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    string empName;
    int empCode;

    void code()
    {
        cout << "Employee: Enter employee code." << endl;
        cin >> empCode;
    }

    void name()
    {
        cout << "Employee: Enter employee name." << endl;
        cin.ignore();
        getline(cin, empName);
    }

    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
    }
};

class Faculty : public Employee
{
public:
    string subjectTaught;

    void subject()
    {
        cout << "Faculty: Enter subject taught." << endl;
        getline(cin, subjectTaught);
    }

    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Subject Taught: " << subjectTaught << endl;
    }
};

class Officer : public Employee
{
public:
    char empGrade;

    void grade()
    {
        cout << "Officer: Enter grade." << endl;
        cin >> empGrade;
    }

    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Grade: " << empGrade << endl;
    }
};

class LabAssistant : public Employee
{
public:
    string labSkills;

    void skills()
    {
        cout << "Lab Assistant: Enter skills." << endl;
        getline(cin, labSkills);
    }

    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Lab Skills: " << labSkills << endl;
    }
};

int main()
{
    int choice;
    Faculty faculty;
    Officer officer;
    LabAssistant labAssistant;

    cout << "1. Faculty\n2. Officer\n3. Lab Assistant\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            faculty.code();
            faculty.name();
            faculty.subject();
            faculty.display();
            break;
        case 2:
            officer.code();
            officer.name();
            officer.grade();
            officer.display();
            break;
        case 3:
            labAssistant.code();
            labAssistant.name();
            labAssistant.skills();
            labAssistant.display();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
