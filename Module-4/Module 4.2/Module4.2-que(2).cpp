#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    string account_number;
    string account_type;
    double balance;

public:
    void assignValues(string n, string acc_num, string acc_type, double bal = 0.0) {
        name = n;
        account_number = acc_num;
        account_type = acc_type;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << " Rs." << amount << " deposited successfully. New balance: Rs" << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Please enter an amount less than or equal to your current balance." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        } else {
            balance -= amount;
            cout << " Rs." << amount << " withdrawn successfully. Remaining balance: Rs." << balance << endl;
        }
    }

    void display() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }
};

int main() {
    BankAccount account;
    string name, account_number, account_type;
    double balance, amount;

    cout << "Enter account holder's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> account_number;
    cout << "Enter account type (Savings/Current): ";
    cin >> account_type;
    cout << "Enter initial balance: ";
    cin >> balance;

    account.assignValues(name, account_number, account_type, balance);

    int choice;
    do {
        cout << "\nBank Account Menu" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

