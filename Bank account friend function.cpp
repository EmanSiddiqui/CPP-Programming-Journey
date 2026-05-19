#include<iostream>
using namespace std;

class BankAccount{
	int accountNumber;
	double balance;
	public:
	BankAccount(int a, float b){
		accountNumber=a;
		balance=b;
	}
	friend void transferfunds(BankAccount & obj1, BankAccount &obj2,double amount);
};
void transferfunds(BankAccount & obj1, BankAccount &obj2, double amount){
	if(obj1.balance>=amount){
		obj1.balance=obj1.balance-amount;
		obj2.balance=obj2.balance+amount;
		cout<<"TRANSFER SUCCESSFULL"<<endl;
		cout<<"ID "<<obj1.accountNumber<<" Balance: "<<obj1.balance<<endl;
		cout<<"ID "<<obj2.accountNumber<<" Balance: "<<obj2.balance<<endl;
		
	}
}

int main(){
	BankAccount b1(101,100);
	BankAccount b2(102,50);
	transferfunds(b1,b2,10);
	
}
