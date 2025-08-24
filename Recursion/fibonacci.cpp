#include<bits/stdc++.h>
using namespace std;


// int fibonacci(int n, int n_1, int count, int target){
//     if(count==target){
//         return 0;
//     }
//     int sum = n+n_1;
//     count++;
//     cout << "sum " << sum << endl;
//     return fibonacci(n_1, sum, count, target);
// }

int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    // int n=0;
    // int n_1=1;
    // int target = 8;
    // int count = 1;
    int n=8;
    int fib = fibonacci(n);
    cout << "Fibonacci of " << n << " is: " << fib << endl;
    return 0;
}