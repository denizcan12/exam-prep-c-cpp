/*
COMPREHENSIVE CLASS QUIZ

Create a class called Account.

The class should contain:
- a private string owner
- a private double balance

The class should have:
1. a parameterized constructor
   - takes owner and balance
   - uses this-> if you keep the same parameter names

2. a copy constructor
   - takes const Account& other
   - copies owner and balance
   - prints "Copy constructor called"

3. a destructor
   - prints "Account destroyed"

4. getters
   - getOwner()
   - getBalance()

5. setters
   - setOwner(...)
   - setBalance(...)
   - balance must not become negative

6. a function printInfo()
   - prints owner and balance

7. a function deposit(double amount)
   - adds money only if amount is positive

8. a function isRich()
   - returns true if balance >= 1000
   - otherwise false

In main:
- create one Account object with normal constructor
- print it
- create a second Account as a copy of the first one
- print the second one
- change the second one using setters and deposit()
- print both objects again
- then do an assignment:
    second = first;
- print both objects again

Important:
- do not use struct
- use class
- keep the data private
- try to understand which lines use:
  - parameterized constructor
  - copy constructor
  - assignment
  - destructor
*/
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
string owner;
double balance;

public:
Account(string owner, double balance){
    this->owner = owner;
    this->balance = balance;
    cout << "Parameterized constructer called." << endl;
}
Account(){ //Unused, but here for sake of practice. 
    owner = "Default Owner";
    balance = 0;
}

Account(const Account &other){
    balance = other.balance;
    owner = other.owner;
    cout << "Copy Constructor is Called." << endl;

}

~Account(){
    cout << "Object Account is Destroyed." << endl;
}

void setOwner(string owner){
    this->owner = owner;
}

void setBalance(double balance){
    if (balance >= 0) this->balance = balance;

}

double getBalance()const {
    return balance;
}

string getOwner()const {
    return owner;
}


void printInfo()const{
    cout << "Your balance is: " << balance << endl;
    cout << "Owner of this account is: " << owner << endl;
}

void depositMoney(double a){
    if (a > 0) balance += a;
}

bool isRich()const{
   return balance>=1000 ? true : false;
}
};

int main(){
    Account firstAccount("Denizcan", 5000);
    Account secondAccount(firstAccount); // not assignment, copy constructor.
    firstAccount.printInfo();
    secondAccount.printInfo();

    secondAccount.depositMoney(555);
    secondAccount.printInfo();
    secondAccount.setBalance(1);
    secondAccount.setOwner("Setted Denizcan");
    secondAccount.printInfo();
    secondAccount.getBalance();
    secondAccount.getOwner();
    firstAccount = secondAccount; // Assignment, no copy constructor.
    firstAccount.printInfo();
    secondAccount.printInfo();
    return 0; // Just before, destructor is called. 
}