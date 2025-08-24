#include<bits/stdc++.h>
using namespace std;

//412
//Four One Two

void saydigits(int digits){
    vector<string> letters = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int d = digits%10;
    if(d==0){
        return ;
    }
    saydigits(digits/10);
    cout << letters[d-1] << " ";
}

int main(){
    saydigits(412);
    return 0;
}