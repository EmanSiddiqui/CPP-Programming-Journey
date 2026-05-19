#include<iostream>
using namespace std;

template<typename T>
  
  void swapvalues(T &x,T &y){
	T  temp;
	temp=x;
	x=y;
	y=temp;
}

int main(){
	int x=9,y=2;
	swapvalues(x,y);
	cout<<x<<endl<<y<<endl;
	
}
