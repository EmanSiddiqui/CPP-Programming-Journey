#include<iostream>
using namespace std;

template<typename T,   int N >

void Square(T x){
	for(int i=0;i<N;i++){
		cout<<x<<"*"<<x<<endl;
	}
}

int main(){
	Square<char,5>('#');
	return 0;
}

