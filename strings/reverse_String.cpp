#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector<char> s1= {'h', 'e', 'l', 'l', 'o', 'w'};
    int st=0;
    int end = s1.size()-1;

    while(st<end){
        swap(s1[st++], s1[end--]);
    }

    for(auto s: s1){
        cout << s << "";
    }cout << endl;

    return 0;
}