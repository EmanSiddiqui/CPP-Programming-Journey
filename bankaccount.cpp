#include<iostream>

using namespace std;

class BankAccount{

private:

float balance;

int accountNumber;

public:

BankAccount(float b, int n){

balance = b;

accountNumber = n;

}

float getBalance(){

return balance;

}

float deposit(float amount){

balance+=amount;

return balance;
}

void display(){

cout<<"your current balance is " <<balance<<endl;
}
};

int main(){

BankAccount b(25000.00,213);

b.display();

b.deposit (500.00);

b.display();

return 0;

}