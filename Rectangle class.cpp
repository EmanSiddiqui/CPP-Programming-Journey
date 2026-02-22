#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		float length;
		float width;
		
		public:
			
			Rectangle(float l,float w){
				length=l;
				width=w;
			}
			
			void setLength(float l){
				length=l;
			}
			
			float getLength(){
				return length;
			}
			
			float getWidth(){
				return width;
			}
			
			void display(){
				cout<<"The length and width of a rectangle are "<<length<<" and "<<width<<" respectively"<<endl;
			}
			
};



int main(){

Rectangle r(2.5,6.8);
r.display();

r.setLength(2.9);
r.display();



return 0;
}
