#include<iostream>
using namespace std;


class Student{
	int rollno;
	string *name;
	public:
	Student(int r,string n){
		rollno=r;
		name=new string;
		*name=n;
	}
	string getName(){
		return *name;
	}
	
	void setName(string n){
	
		*name=n;
	}
	
	int getRollno(){
		return rollno;
	}
	
	void setrollno(int r){
		rollno=r;
	}
	
	Student(const Student &obj){
		rollno=obj.rollno;
		name=new string;
		*name=*(obj.name);
	}
	
	
	void display(){
		cout<<"Roll no: "<<rollno<<endl;
		cout<<"Name: "<<*name<<endl;
	}
	
	~Student(){
		delete name;
	}
};

int main(){

Student s1(45,"Eman");
s1.display();

Student s2=s1;
s2.display();

s2.setName("Ayesha");
s2.display();


return 0;
}

