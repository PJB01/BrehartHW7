//header file for bankAccount

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

class BankAccount {
    private:
        string customerName;
        float balance;

        void setName(string n);
        void setBalance(float bal);
    public:
        BankAccount(string n, float bal);
        string getName();
        float getBalance();
        void deposit(float dep);
        void withdraw(float draw);
        ~BankAccount();
};