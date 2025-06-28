#include<bits/stdc++.h>
using namespace std; 

class Teacher {
private:
    double salary; 
public: //access modifiers

    string name; //properties or data
    string department;
    string subject;

    //constructor //Used for Initializations
    Teacher(){
        cout<< "Welcome!! I am the New Faculty!!"<<endl;
        department="Computer Engineering";

    }
    
    //let's create default Copy Constructor
    Teacher(Teacher &originalObj){
        cout << "I am a Custom Made Copy Constructor" << endl;
        this->name=originalObj.name;
        this->department=originalObj.department;
        this->subject=originalObj.subject;
        this->salary=originalObj.salary;
    }

    //parameterized Constructor
    Teacher(string name, string department, string subject, double salary){
        this->name=name;
        this->department=department;
        this->subject=subject;
        this->salary=salary;
    }


    
    //methods(member)
    void changeDepartment(string newDept){
        department=newDept;
    }

    void setSalary(double s){ //setter
        salary=s;
    }

    double getSalary(){    //getter
        return salary;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

class Account{
private:
    string accId;
    string passwd;

public:
    string name;
    double balance;

};

int main(){
    Teacher t1; //constructor call; jodi amra naa likhi tahole nijera auto hoi
    t1.name="Shraddha";
    t1.department="C++";
    //t1.salary=25000;
    t1.setSalary(30000);
    cout << "Name of Teacher t1 is: " << t1.name << endl;
    cout << "Salary of Teacher t1 is: " << t1.getSalary() << endl;
    
    
    Teacher t2;
    cout << "Department of Teacher 2 is: " <<t2.department << endl;
    

    Teacher t3("Babbar", "Computer Engineering", "C++", 35000);
    t3.getInfo();


    cout<<"---------------------------------------------------"<<endl;
    Teacher t4(t3); //default Copy Constructor
    t4.getInfo();


    cout<<"---------------------------------------------------"<<endl;
    Teacher t5(t4);
    t5.getInfo();

    return 0;
}