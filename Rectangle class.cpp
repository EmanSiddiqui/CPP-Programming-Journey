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
			Rectangle(const Rectangle &obj){
				length=obj.length;
				width=obj.width;
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

Rectangle r1(2.5,6.8);
r1.display();

Rectangle r2=r1;
r2.display();



return 0;
}
