#include<bits/stdc++.h>
using namespace std;


class Student {
public:
    string name; 
    double* cgpaPtr;

    Student(string name, double cgpa){
        this -> name = name;
        //allocate new dynamic memory to pointer
        cgpaPtr = new double;
        *cgpaPtr = cgpa;

    }

    //DeepCopy
    Student(Student &newObj){
        this->name=newObj.name;
        //this->cgpaPtr=newObj.cgpaPtr;
        cgpaPtr = new double; //create new memory allocation for the Copy Also
        *cgpaPtr = *(newObj.cgpaPtr);
    }

    //destructor--> We need it to deallocate(delete) the memory that is dynamically
    // allocated 

    ~Student(){
        cout << "I am Deleting this Memory"<<endl;
        delete cgpaPtr;
    }

    void getInfo(){
        cout << "Student Name: " << name << " and his CGPA: " << *cgpaPtr << endl;
    }

};


int main(){
    Student s1("abc", 3.5);
    s1.getInfo();

    Student s2(s1);
    s2.name="def";
    s2.getInfo();

    *(s2.cgpaPtr) = 3.7;
    s1.getInfo();
    s2.getInfo();
    return 0;
}