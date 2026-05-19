#include<iostream>
using namespace std;

class Account{
	private:
	int balance;
	public:
	Account(int b){
		balance=b;
	}
	friend class Manager;
};

class Manager{
	public:
		
	void display(Account &obj){
		cout<<"Balance "<<obj.balance<<endl;
	}
};

int main (){
	Account user(89000);
	Manager m;
	m.display(user);
	return 0;
}
