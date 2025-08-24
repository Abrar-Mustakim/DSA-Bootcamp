#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int high, int low, int target){
    if(low>high){
        return -1;
    }
    int mid=low+((high-low)/2);
    if(arr[mid]==target){
        return mid;
    } else if (arr[mid]>target){
        return binary_search(arr, mid-1, low, target);
    } else{
        return binary_search(arr, high, mid+1, target);
    }
}

int main(){
    vector<int> arr = {2, 4, 6, 10, 14, 16};
    int index = binary_search(arr, arr.size()-1, 0, 14);
    cout << index << endl;
    return 0;
}