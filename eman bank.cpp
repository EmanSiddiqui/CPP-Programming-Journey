#include<iostream>
using namespace std;


class BankAccount{
	float balance;
	int transactions;
	public:
	BankAccount(){
		balance=0;
		transactions=0;
	}
	
	float getbalance(){
		return balance;
	}
	int getTransactions(){
		return transactions;
	}
	void deposit(double amount){
		if (amount>0){
			balance+=amount;
			cout<<"Now your current balance is Rs"<<getbalance()<<endl;
			transactions++;
		}
		else
		cout<<"Invalid Amount"<<endl;
	}
	
	
	void withdrawl(double amount){
		if(amount>0 && amount<=balance){
			balance-=amount;
			cout<<"Now your current balance is Rs"<<getbalance()<<endl;
			transactions++;
		}
		else
		cout<<"Invalid Amount"<<endl;
	}
	
	double Interestearned(){
		return balance*0.05;
	}

};


int main(){
	
	BankAccount a;
	
	int choice;
	double amount;
	
	do{
		cout<<"Welcome to Emans Bank"<<endl;
		cout<<"1. Display the account balance"<<endl;
        cout<<"2. Display the number of transactions"<<endl;
        cout<<"3. Display interest earned for this period"<<endl;
        cout<<"4. Make a deposit"<<endl;
        cout<<"5. Make a withdrawal"<<endl;
        cout<<"6. Exit the program"<<endl; 
		cout<<"Enter your choice: "<<endl;
		cin>>choice;
        
    switch(choice){
    	case 1:
    		cout<<"Your Current balance is RS "<<a.getbalance()<<endl;
    		break;
    	case 2:
    		cout<<"No of Transactions made are: "<<a.getTransactions()<<endl;
    		break;
    	case 3:
    		cout<<"Your interest earned is "<<a.Interestearned()<<endl;
    		break;
    	case 4:
    		cout<<"Enter amount to be deposit"<<endl;
    		cin>>amount;
    		a.deposit(amount);
    		break;
    	case 5:
    		cout<<"Enter amount to withdraw"<<endl;
    		cin>>amount;
    		a.withdrawl(amount);
    		break;
    	case 6:
    		cout<<"Thankyou for your time. GOODBYE:)..."<<endl;
    		break;
    	default:
    		cout<<"Invalid choice"<<endl;
    	}
    }
    while(choice!=6);
    
	
	



return 0;
}

