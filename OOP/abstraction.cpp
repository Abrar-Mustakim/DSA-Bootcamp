#include<bits/stdc++.h>
using namespace std;

class Shape { //after doing perfect virtual class--> it became--> abstact class
    virtual void draw() = 0;//perfect virtual class
};

class Circle : public Shape {
public:
    void draw(){
        cout << "Drawing a Circle\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}