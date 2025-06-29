#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string age;    
};

class Student : public Person { // person is used for hierarchical inheritance
public:
    string name;
    int roll;
};

class Teacher : public Person{
public: 
    string subject; 
    double salary;    
};

class TA : public Student, public Teacher {
public:
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
    
};

int main(){
    TA t1;
    t1.name="Abrar";
    t1.salary=35000;
    t1.roll=2030;
    t1.subject="CSE";
    t1.getInfo();
    return 0;
}