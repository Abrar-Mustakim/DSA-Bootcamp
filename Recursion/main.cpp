#include<bits/stdc++.h>
using namespace std;
int power(int base, int pow){
    if(pow==0){
        return 1;
    }
    return base * power(base, pow-1);
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n * factorial(n-1);
}


int counting(int n){
    if(n==0){
        return 0;
    }
    cout << n << " ";
    return counting(n-1);
}


void reverse_counting(int n){
    if(n==0){
        return ;
    }
    reverse_counting(n-1);
    cout << n << " ";
    
}

int main(){
    cout <<"Recursion Series" << endl;
    //  big/complex problem er solution -> same type er small problem---->Recursion
    // 2^4 = 2 * 2 * 2 * 2
    // 2^4 = 2 * 2 ^ 3
    //F(n) = n * F(n-1) ---> Recursive Relation
    int fact=factorial(5);
    cout << "Factorail is: " << fact << endl;  
    
    int powers=power(2, 5);
    cout << "power is: " << powers << endl;   
    //return 0;

    counting(5);
    cout << endl;
    reverse_counting(5);
    cout << endl;
    
}