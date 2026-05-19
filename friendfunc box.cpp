#include<iostream>
using namespace std;

class Box{
	int length;
	public:
	Box(int l){
		length=l;
	}
	
	friend void display(Box b);
};
    void display(Box b){
    	cout<<b.length;
	}

int main(){
	
	Box b1(4);
	display(b1);
	return 0;
	
}
