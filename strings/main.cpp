#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[] = {'a', 'b', 'c', '\0'}; // \0--> null ascii, it is for converting into valid string

    //'a'--> 1B

    cout <<str<<endl;


    cout << strlen(str) << endl;

    char str_1[]="hello"; //string literals, will not change  |h|e|l|l|o|
    cout <<str_1<<endl;
    cout <<str_1[4]<<endl;

    cout << strlen(str_1) << endl;

    // char str_2[100];
    // cin >> str_2;        //Brother
    // cout <<str_2<<endl;


    // char str_3[100];  //getline can take whole sentece as input, even space seperated
    // cin.getline(str_3, 100); //Hello World 
    // cout <<str_3<<endl;

    char str_3[100];  
    cin.getline(str_3, 100, '$'); //Hello Worl$damn.......  -->$ er agg porjonto ashbe 
    cout <<str_3<<endl;

    for(int i=0;str_3[i]!='\0';i++){
        cout << str_3[i] << " ";
    }cout << endl;


    string str_4="Helloooooo Prithibi";
    cout << str_4 << endl;

    str_4="hhhhhhhhhhhhh"; //dynamic=> runtime resize
    cout << str_4 << endl;


    string s1="Hello";
    string s2="World";
    string s3 = s1+s2; 
    cout << s3 << endl;
    string s4="Hello";
    cout << (s1==s4) << endl;
    cout << (s1<s2) << endl; //h w er age ashe


}