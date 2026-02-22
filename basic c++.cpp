#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
		public:
			Student(int a,string n){
				age=a;
				name=n;
			}
			string getName(){
				return name;
			}
			int getAge(){
				return age;
			}
			void setName(string n){
				name=n;
			}
			void setAge(int a){
				age=a;
			}
			void display(){
				cout<<"The name of student is "<<name<<" and the age is "<<age<<endl;
			}
};



int main(){

Student s1(18,"Ahmed");
s1.display();
s1.getAge();
s1.getName();
s1.setAge(19);
s1.setName("Ali");
s1.display();


return 0;
}
