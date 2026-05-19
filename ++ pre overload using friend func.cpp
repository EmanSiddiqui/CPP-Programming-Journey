//#include<iostream>
//using namespace std;
//
//class Complex{
//	public:
//		int real;
//		int img;
//	Complex(int r, int i){
//		real=r;
//		img=i;
//	}
//	
//	friend Complex operator++(Complex &c);
//
//};
//Complex operator++(Complex &c){
//	Complex temp(0,0);
//	temp.real=++c.real;
//	temp.img=++c.img;
//	
//	return temp;
//	
//}
//
//int main(){
//	Complex c1(2,3);
//	Complex c2=++c1;
//	
//	cout<<c1.real<<"+i"<<c1.img<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;

class Complex{
	public:
		int real;
		int img;
	Complex(int r, int i){
		real=r;
		img=i;
	}
	
	friend Complex operator++(Complex &c,int);

};
Complex operator++(Complex &c,int){
	Complex temp(0,0);
	temp=c;
	c.real++;
	c.img++;
	
	return temp;
	
}

int main(){
	Complex c1(2,3);
	cout<<c1.real<<"+i"<<c1.img<<endl;
	Complex c2=c1++;
	
	cout<<c1.real<<"+i"<<c1.img<<endl;
	return 0;
}






