#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int *rollno;
    float gpa;

public:
    // Constructor
    Student(string n, int r, float g) {
        name = n;
        rollno = new int(r); // cleaner initialization
        if (g >= 0.0 && g <= 4.0)
            gpa = g;
        else {
            cout << "You have entered wrong GPA. Setting GPA to 0.0" << endl;
            gpa = 0.0;
        }
    }

    // Copy Constructor (Deep Copy)
    Student(const Student &obj) {
        name = obj.name;
        rollno = new int(*(obj.rollno));
        gpa = obj.gpa;
    }

    // Destructor (important for dynamic memory)
    ~Student() {
        delete rollno;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << ", Roll No: " << *rollno << ", GPA: " << gpa << endl;
    }

    // Optional: Setter for GPA
    void setGPA(float g) {
        if (g >= 0.0 && g <= 4.0)
            gpa = g;
        else
            cout << "Invalid GPA!" << endl;
    }
};

int main() {
    // Original student
    Student s1("Alice", 101, 3.7);
    cout << "Original student:" << endl;
    s1.display();
    cout<<endl;

    // Copy of student
    Student s2 = s1; // invokes copy constructor
    cout << "Copied student:" << endl;
    cout<<endl;
    s2.display();
    cout<<endl;

    // Changing original does not affect copy
    s1.setGPA(4.0);
    cout << "After modifying original student GPA:" << endl;
    cout<<endl;
    cout << "Original: ";
    s1.display();
    cout << "Copy: ";
    s2.display();

    return 0;
}