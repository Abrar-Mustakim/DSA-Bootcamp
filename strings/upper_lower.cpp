#include<bits/stdc++.h>
using namespace std;

//input--> abCD
//abcd
//ABCD
//ABcd

int main(){
    // cout << ((char) 65) << endl;
    // cout << ((int) 'A') << endl;
    // int x = 'a' - 'A';
    // cout << x << endl;

    string s; 
    cin>>s;
    string s1=s;
    string s2=s;

    for(int i=0; i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] += 'a' - 'A'; //s[i]+=32
        }

        //s1
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i] -= 'a' - 'A'; //s[i]+=32
        }

        //s2
        if(s2[i]>='a' && s2[i]<='z'){
            s2[i] -= 'a' - 'A'; //s[i]+=32
        }
        else if(s2[i]>='A' && s2[i]<='Z'){
            s2[i] += 'a' - 'A'; //s[i]+=32
        }
    }



    cout << s << endl;
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}