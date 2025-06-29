#include<bits/stdc++.h>
using namespace std;

class Print {
public:
    //multiple fuction same name, but act differently, according to context(parameters) --> Function Overloading
    void show(int x){
        cout << "Int: " << x << endl;
    }

    void show(char x){
        cout << "Char: " << x << endl;
    }

    
};


class Parent {
public:
    void showInfo(){
        cout<< "THis is a Parent Node" << endl;
    }

    //virtual functions-->need to redefined in the derived classed
    virtual void hello(){
        cout << "Hello from Parents"<<endl;
    }
};

class Child : public Parent {
public:
    void showInfo(){
        cout<< "THis is a Child Node" << endl;
    }

    void hello(){
        cout << "Hello from Child"<<endl;
    }
};

int main(){
    Print p1;
    p1.show(500);
    p1.show('c');
    


    Child c1;
    c1.showInfo();
    c1.hello();

    return 0;
    
}