#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr, int n){
    if(n== arr.size()-1){
        return true;
    }
    if(arr[n]>arr[n+1]){
        return false;
    }else{
        return isSorted(arr, n+1);
    }
    //cout << arr[n] << " " << arr[n+1] <<  endl;
    

}

int summations(vector<int> sums, int size, int sum){
    if(size<0){
        return sum;
    }
    return summations(sums, size-1, sum+sums[size]);
}

int main(){
    vector<int> arr = {2, 4, 6, 9, 17, 11, 13};
    int n=0;
    bool is_sorted = isSorted(arr, n);
    cout << is_sorted << endl;

    
    vector<int> sums = {3, 2, 5, 1, 6};
    int size = sums.size()-1;
    int sum=0;
    int sum_result = summations(sums, size, sum);
    cout << "Sum " << sum_result << endl;

}