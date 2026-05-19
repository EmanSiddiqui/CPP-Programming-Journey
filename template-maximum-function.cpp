#include<iostream>
using namespace std;

template<typename T>
  
T maximum(T x,T y){
	return (x>y)? x:y;
}

int main(){
	cout<<maximum('A','B')<<endl;
}
