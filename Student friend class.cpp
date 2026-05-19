#include<iostream>
using namespace std;

class Student{
	string name;
	int marks;
	public:
	Student(string n, int m){
		name=n;
		marks=m;
	}
	friend class ExamDepartment;
};

class ExamDepartment{
	public:
	void generateResult(Student &obj){
		if(obj.marks>=90){
			cout<<"Grade A"<<endl;
		}
		else if(obj.marks>=75 && obj.marks<=89){
			cout<<"Grade B"<<endl;
		}
		else if(obj.marks>=50 && obj.marks<=74){
			cout<<"Grade C"<<endl;
		}
		else{
			cout<<"Fail"<<endl;
		}
	}
};


int main(){
	Student s("Eman",98);
	ExamDepartment e1;
	e1.generateResult(s);
	return 0;
	
}
