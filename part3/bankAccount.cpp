//implementation for BankAccount

#include "bankAccount.h"


BankAccount::BankAccount(string n, float bal) {
    this->customerName = n;
    this->balance = bal;
}

void BankAccount::setName(string n) {
    customerName = n;
}

void BankAccount::setBalance(float bal) {
    balance = bal;
}

string BankAccount::getName() {
    return customerName;
}

float BankAccount::getBalance() {
    return balance;
}

void BankAccount::deposit(float dep) {
    balance += dep;
}

void BankAccount::withdraw(float draw) {
    balance -= draw;
}

BankAccount::~BankAccount() {
   cout << "destroying " << customerName << "'s bank account" << endl;
}



