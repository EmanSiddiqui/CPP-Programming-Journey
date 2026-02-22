#include<iostream>
using namespace std;

class Laptop{
	private:
		string brand;
		int ram;
		float price;
		
		public:
			Laptop(){
				brand="unknown";
				ram=0;
				setPrice(0);
			}
			
			Laptop(string b,int r, float p){
				brand=b;
				ram=r;
				setPrice(p);
			}
			
			Laptop(const Laptop &obj){
				brand=obj.brand;
				ram=obj.ram;
				price=obj.price;
			}
			
			~Laptop(){
				cout<<"LAPTOP DESTROYED"<<endl;
			}
			
			void setPrice(float p){
				if(p>0){
					price=p;
				}
				else{
					price=0;
				}
			}
			
			string getBrand(){
				return brand;
			}
			
			int getRam(){
				return ram;
			}
			
			float getPrice(){
				return price;
			}
			
			void display(){
				cout<<"Brand= "<<brand<<endl;
				cout<<"RAM= "<<ram<<endl;
				cout<<"Price= "<<price<<endl<<endl;
			}
};



int main(){

Laptop l1("dell",108,42000);
l1.display();
l1.setPrice(-85);
Laptop l2=l1;
l2.display();
l2.setPrice(70000);
l2.display();


return 0;
}
