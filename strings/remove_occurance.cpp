#include<bits/stdc++.h>
using namespace std;

int main(){
    //str.find(substring)-->starting position
    //str.erase(start, end-->length)
    string str = "daabcbaabcbc";
    string substr="abc";
    cout<< str.find(substr) << endl;

    while(str.length()>0 && str.find(substr)<str.length()){ //to find the valid value, because non existent, valid value ashbe naaa

        str.erase(str.find(substr), substr.length());
        //cout<< str.find(substr) << endl;
        cout << str << endl;

    }

    return 0;
}