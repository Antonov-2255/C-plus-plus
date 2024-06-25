#include <iostream>
#include <string>
using namespace std;

class Bank_Account
{
private:
    string Depositor_Name;
    int Acc_No;
    string Acc_type;
    float Balance;

public:
    void getdata()
    {
        cout << "Enter the name of the Depositor: ";
        getline(cin, Depositor_Name);

        cout << "Enter the account number: ";
        cin >> Acc_No;
        cin.ignore();

        cout << "Enter the account type: ";
        cin >> Acc_type;

        cout << "Enter the balance: ";
        cin >> Balance;
    }

   /* void display()
    {
        cout << "The name of the Depositor is " << Depositor_Name << endl;
        cout << "The account number is " << Acc_No << endl;
        cout << "The account type is " << Acc_type << endl;
        cout << "The balance is " << Balance << endl;
    }*/

    void deposit(float amount)
    {
        if (amount > 0)
        {
            Balance += amount;
            cout << "Deposit successful. New balance: " << Balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= Balance)
        {
            Balance -= amount;
            cout << "Withdrawal successful. New balance: " << Balance << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }

    }

    void inquireBalance()
    {
        cout << "Current balance: " << Balance << endl;
    }
};

int main()
{
    char choice;
    Bank_Account bank1;

    cout << "Enter data for a new account:" << endl;
    bank1.getdata();

    while (true)
    {
        cout << "\nChoose an option:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n\n";
        cin >> choice;

        switch (choice)
        {
        case '1':
            float depositAmount;
            cout << "Enter the deposit amount: ";
            cin >> depositAmount;
            bank1.deposit(depositAmount);
            break;

        case '2':
            float withdrawAmount;
            cout << "Enter the withdrawal amount: ";
            cin >> withdrawAmount;
            bank1.withdraw(withdrawAmount);
            break;

        case '3':
            bank1.inquireBalance();
            break;

        case '4':
            cout << "Exit";
            return 0;

        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
