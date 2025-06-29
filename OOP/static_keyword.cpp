#include<bits/stdc++.h>
using namespace std; 

class ABC {
public:
    ABC() {
        cout << "Constructor Starting" << endl; 
    }

    ~ABC() {
        cout << "Constructor Destroyed" << endl; 
    }
};


void fun(){
    static int x=0; //init 1 times, rest no need to run this, others will run 
    cout << "X: " << x << endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();

    if(true){
        static ABC a;  //static object runs for lifetime, until the program ended, then it gets destroyed

    }
    cout << "Happy Ending" << endl;

    return 0;
}