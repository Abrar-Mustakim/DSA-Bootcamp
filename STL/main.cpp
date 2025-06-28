#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    cout << "Size of Vector: "<< vec.size() << endl;
    cout << "Capacity of Vector: "<< vec.capacity() << endl;

    cout << "Front: " << vec.front() << endl;
    cout << "Back: " << vec.back() << endl;

    vec.emplace_back(7);
    cout << "Back: " << vec.back() << endl;

    vec.pop_back();
    cout << "Back: " << vec.back() << endl;

    for(int i:vec){
        cout << i << " ";
    }cout << endl;

    return 0;
}