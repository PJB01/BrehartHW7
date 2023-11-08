
/*
 Example invocation: ./bankAccount
 Perform accounts on bank accounts: 

    a. Instantiate an object named jackAccount and initialize it with name Jack Smith and balance
    50 dollars.
    b. Instantiate an object named jillAccount and initialize it with name Jill Brian and balance 100
    dollars.
    c. Instantiate an array of bankAccount objects named bankArray of size 3 and initialize the 3
    objects in each element as follows:
    bankArray[0]: name is Ralph Kramden, balance 10 dollars.
    Page 6 of 7
    bankArray[1]: name is Alice Kramden, balance 20 dollars.
    bankArray[2]: name is Ed Norton, balance 30 dollars.
    d. Deposit 30 dollars to each of the 5 accounts.
    e. Withdraw 20 dollars from each of the 5 accounts.
    f. Print out the names of each of the accounts and his/her balance for each of the 5 accounts
*/

#include "bankAccount.h"

int main(int argc, char* argv[]){

  BankAccount jackAccount("Jack Smith", 50.0); 
  
  BankAccount jillAccount("Jill Brian", 100.0);

  BankAccount bankArray[3] {
    BankAccount("Ralph Kramden", 10.0),
    BankAccount("Alice Kramden", 20.0),
    BankAccount("Ed Norton", 30.0) 
  };

  jackAccount.deposit(30);
  jillAccount.deposit(30);
  bankArray[0].deposit(30);
  bankArray[1].deposit(30);
  bankArray[2].deposit(30);

  jackAccount.withdraw(20);
  jillAccount.withdraw(20);
  bankArray[0].withdraw(20);
  bankArray[1].withdraw(20);
  bankArray[2].withdraw(20);

  cout << jackAccount.getName() << " Balance: " << jackAccount.getBalance() << endl;
  cout << jillAccount.getName() << " Balance: " << jillAccount.getBalance() << endl;
  cout << bankArray[0].getName() << " Balance: " << bankArray[0].getBalance() << endl;
  cout << bankArray[1].getName() << " Balance: " << bankArray[1].getBalance() << endl;
  cout << bankArray[2].getName() << " Balance: " << bankArray[2].getBalance() << endl;
}