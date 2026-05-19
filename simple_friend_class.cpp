#include<iostream>
using namespace std;

class A{
	public:
	int secret;
	A(int s){
		secret=s;
	}
	friend class B;
};

class B{
	public:
		
	void display(A &obj){
		cout<<"secret "<<obj.secret<<endl;
	}
};

int main (){
	A a1(100);
	B b1;
	b1.display(a1);
	return 0;
}
