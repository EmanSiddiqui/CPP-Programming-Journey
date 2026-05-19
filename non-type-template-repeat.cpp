#include<iostream>
using namespace std;

template<typename T, int N>

void repeat (T x){
	for(int i=0;i<N;i++){
		cout<<x<<endl;
	}
}
	
int main(){
	repeat<string,10>("EMAN");
	return 0;
}
