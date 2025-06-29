#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    string name; 
    int age;

    // Person(){
    //     cout << "I am Parent Class" << endl;
    // }

    Person(string name, int age){
        this->name=name;
        this->age = age;
    }

    ~Person(){
        cout << "Memory Deleting of Parent " << endl;
    }
};

class Student: public Person {
public: 
    int roll;

    //if there is parameterized constructor in parent class, then u must daclare those in this instructor
    // Student(){
    //     cout << "Child Constructor" << endl;
    // }

    Student(string name, int age, int roll): Person(name, age) {
        this->roll=roll;
        cout << "Child Constructor" << endl;
    }
        

    
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        
    }
    ~Student(){
        cout<<"Memory Deleting of Child..."<<endl;
    }
};


class GradStudent : public Student {
public:
    int researchPublish;
    GradStudent(string name, int age, int roll, int researchPublish) : Student(name, age, roll){
        this->researchPublish=researchPublish;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "Published: " << researchPublish << endl;   
    }
    ~GradStudent(){
        cout << "Memory Deleting of Grad Student... " << endl;
    }
};


int main(){
    //Student s1;
    //s1.name="Maish";
    //s1.age=32;
    //s1.roll=12;
    Student s1("Mahendra", 30, 131);
    s1.getInfo();
    

    GradStudent g1("Mahi", 30, 12, 5);
    g1.getInfo();
    return 0;
}