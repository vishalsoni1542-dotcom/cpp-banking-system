#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int num, string name, double bal)
    {
        accountNumber = num;
        accountHolderName = "name";
        balance = bal;
    }

    void deposit(double amount)
    {

        balance = balance + amount;
    }

    void withdraw(double amount)
    {

        if (balance < amount)
        {
            cout << "insufficient balance";
        }

        else
        {
            balance = balance - amount;
        }
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(int add)
    {
        balance = balance + add;
    }

    void withdraw(int sub)
    {
        if (balance < sub)
        {
            cout << "insufficient balance";
        }
        else
        {
            balance = balance - sub;
        }
    }

    void displayAccountInfo()
    {
        cout << "ACCOUNT NUMBER: " << endl;
        cout << "ACCOUNT NAME: " << endl;
        cout << "BALANCE: " << endl;
    }

    virtual void calculateInterest()
    {
    }
};

class SavingsAccount : public BankAccount
{
private:
    int interestRate;

public:
    SavingsAccount(int num, string name, double bal, int rate) : BankAccount(num, name, bal)
    {
        interestRate = rate;
    }

    void calculateInterest() override
    {
        cout << getBalance() * interestRate / 100;
    }
};

class CheckingAccount : public BankAccount

{
private:
    double overdraftLimit;

public:
    CheckingAccount(int num, string name, double bal, double drlimit) : BankAccount(num, name, bal)
    {
        overdraftLimit = drlimit;
    }

    void checkOverdraft(double amount)
    {
        if (amount > getBalance() + overdraftLimit)
        {
            cout << "account overdraftLimit" << endl;
        }
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    int term;

public:
    FixedDepositAccount(int num, string name, double bal, int t) : BankAccount(num, name, bal)
    {
        term = t;
    }

    void calculateInterest() override
    {
        cout << getBalance() * term * 6 / 1200;
    }
};

int main()
{
    SavingsAccount savings(101, "deval", 1000,6);
    CheckingAccount checking(102, "gopal", 2000, 3000);
    FixedDepositAccount fixed(103, "vishal", 5000, 6);

    int choice;

    do
    {
        cout<<"----banking system-----"<<endl;
        cout<<"1. saving acc: "<<endl;
        cout<<"2. checking acc: "<<endl;
        cout<<"3. fixed acc"<<endl;
        cout<<"4. exit..."<<endl;

        cout<<"enter your choice: "<<endl;
        cin>>choice;

        if(choice == 1){

        }
        else if (choice == 2)
        {
            
        }
        else if (choice == 3)
        {
            
        }
        else if (choice == 4)
        {
            
        }
        
        
        
    } while (choice!=4);
    
    return 0;
}