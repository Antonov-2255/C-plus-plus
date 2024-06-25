//Updated Practical - 13.1

/* AIM - Create a class “Bank_Account” that contains Depositor_Name , Acc_No , Acc_type ,Balance as its data members FOR MULTIPLE USER.
Also create member functions for account creation, deposit, withdraw and balance inquiry for class.
Demonstrate its use in main. and also create access function that can access account by its account number*/

#include <iostream>
#include <string>
using namespace std;

class Bank_Account
{
public:
    char Depositor_Name[100];
    int Acc_No;
    string Acc_type;
    float Balance;

    Bank_Account()
    {
        Acc_No = -1;
        Balance = 0.0;
    }


    void getdata()
    {
        cout << "Enter the name of the Depositor: ";
        cin.getline(Depositor_Name, 100);

        cout << "Enter the account number: ";
        cin >> Acc_No;
        cin.ignore();

        cout << "Enter the account type: ";
        cin >> Acc_type;

        cout << "Enter the balance: ";
        cin >> Balance;
    }

    void display()
    {
        cout << "\nThe name of the Depositor is " << Depositor_Name << endl;
        cout << "The account number is " << Acc_No << endl;
        cout << "The account type is " << Acc_type << endl;
        cout << "The balance is " << Balance << endl;
    }

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


    void access()
    {
        cout << "Accessing account details for Account Number " << Acc_No << ":" << endl;
        display();
    }
};

int main()
{
    char choice;
    Bank_Account bankAccounts[100]; // Array to store multiple accounts
    int numAccounts = 0;           // Number of accounts currently stored

    while (true)
    {
        cout << "\nChoose an option:\n";
        cout << "1. Create new account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Balance Inquiry\n";
        cout << "5. Access account\n";
        cout << "6. Delete account\n";
        cout << "7. Exit\n\n";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case '1':
            bankAccounts[numAccounts].getdata();
            numAccounts++;
            cout << "Account created successfully." << endl;
            break;

        case '2':
            int depositAccountNo;
            float depositAmount;
            cout << "Enter the account number: ";
            cin >> depositAccountNo;
            cout << "Enter the deposit amount: ";
            cin >> depositAmount;

            for (int i = 0; i < numAccounts; i++)
            {
                if (bankAccounts[i].Acc_No == depositAccountNo)
                {
                    bankAccounts[i].deposit(depositAmount);
                    break;
                }
            }
            break;

        case '3':
            int withdrawAccountNo;
            float withdrawAmount;
            cout << "Enter the account number: ";
            cin >> withdrawAccountNo;
            cout << "Enter the withdrawal amount: ";
            cin >> withdrawAmount;

            for (int i = 0; i < numAccounts; i++)
            {
                if (bankAccounts[i].Acc_No == withdrawAccountNo)
                {
                    bankAccounts[i].withdraw(withdrawAmount);
                    break;
                }
            }
            break;

        case '4':
            int inquiryAccountNo;
            cout << "Enter the account number: ";
            cin >> inquiryAccountNo;

            for (int i = 0; i < numAccounts; i++)
            {
                if (bankAccounts[i].Acc_No == inquiryAccountNo)
                {
                    bankAccounts[i].inquireBalance();
                    break;
                }
            }
            break;

        case '5':
            int accessAccountNo;
            cout << "Enter the account number: ";
            cin >> accessAccountNo;

            if (numAccounts <= 0)
            {
                cout << "No account is created\n";
            }
            for (int i = 0; i < numAccounts; i++)
            {
                if (bankAccounts[i].Acc_No == accessAccountNo)
                {
                    bankAccounts[i].access();
                    break;
                }
            }
            break;

        case '6':
            int deleteAccountNo, i, j;
            cout << "Enter the account number to delete: ";
            cin >> deleteAccountNo;

            for (i = 0; i < numAccounts; i++)
            {
               for (j = i; j < numAccounts - 1; j++)
                {
                    bankAccounts[j] = bankAccounts[j + 1];
                }
                    numAccounts--;
                    cout << "Account Number " << deleteAccountNo << " has been deleted." << endl;
                    break;
            }

            break;

        case '7':
            cout << "Exiting." << endl;
            return 0;

        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
