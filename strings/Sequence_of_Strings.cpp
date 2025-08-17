#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> v; 
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    int size = v.size();

    for(int i=0;i<size;i++){
        cout << v.back() << endl;
        v.pop_back();
    }
}