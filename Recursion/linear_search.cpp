#include<bits/stdc++.h>
using namespace std;

bool linear_search(vector<int> arr, int target, int n){
    if(n==arr.size()){
        return false;
    }
    else if(arr[n]==target){
        return true;
    }else {
        return linear_search(arr, target, n+1);
    }
}

int main(){
    vector<int> arr={1, 2, 3, 4, 5};
    int target = 4;
    int n = 0;
    bool search = linear_search(arr, target, n+1);
    cout << search << endl;
    return 0;
}