#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> chars={'a','a','b','b','c','c','c'};
    //int n = sizeof(chars)/sizeof(chars[0]);
    int n = chars.size();
    //cout << n << endl;
    int index=0;
    for(int i=0;i<n;i++){
        //int index=i;  
        char ch=chars[i];
        int score=0;
        while(i<n && chars[i]==ch){
            score+=1;
            i++;
        }
        if(score==1){
            chars[index++]=ch;
        }
        else if(score>1){
            chars[index++]=ch;
            string str = to_string(score);
            for(char d:str){
                chars[index++]=d;
            }
        }
        // if(score>1){
        //     string str = to_string(score);
        //     for(char d:str){
        //         chars[index+1]=d;
        //         index+=1;
        //     }
        // }
        i--;
    }


    
    chars.resize(index);
    for(int i=0; i<n;i++){
        cout << chars[i]<<" "<<endl;
    }
    cout << index << endl;
    return 0;
}