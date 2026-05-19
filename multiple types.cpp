#include<iostream>
using namespace std;

template<typename T1, typename 	T2>
  
 auto add(T1 x, T2 y){
 	return x+y;
 }
 
 
int main(){
	int x=3;
	float y=2.5;
	auto result=add(x,y);
	cout<<result;
}
