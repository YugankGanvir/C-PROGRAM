#include <iostream>
#include <string>
using namespace std;

class Student {
public:
int roll_no;
string name;
float marks;

void accept() {
cout << "Enter the Roll Number:";
cin >> roll_no;

cout << "Enter the Name:";
cin.ignore();
getline(cin,name);

cout << "Enter the marks:";
cin >> marks;
}

void calculate_result() {
if (marks>=35) {
cout << "Result:PASS" << endl;
}
else{
cout<< "Result:FAIL" << endl;
}
}

void display() {
cout << "\n---STUDENT DETAILS---" << endl;
cout << "Student Roll Number:" << roll_no << endl;
cout << "Student Name:" << name << endl;
cout << "Student Marks:" << marks<< endl;
calculate_result();
}
};

int main() {
Student s;
s.accept();
s.display();
return 0;
}
