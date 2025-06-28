#include<bits/stdc++.h>
using namespace std;


int binary_search(vector<int> arr, int target, int low, int high){
    if(low<=high){
        int mid = low+((high-low)/2);
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            return binary_search(arr, target, mid+1, high);
        }else{
            return binary_search(arr, target, mid, high-1);
        }
    }
    return -1;

    
}

int main(){
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int low=0;
    int high=arr.size()-1;    
    int mid = binary_search(arr, 9, low, high);

    cout << "Binary Search Found: "<< mid << endl;
    return 0;
}
