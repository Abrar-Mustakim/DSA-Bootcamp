#include<bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>& arr) {

        int n=arr.size()-1;
        if(n==1){
            return 0;
        } else if(arr[0]>arr[1]){
            return 0;
        } else if(arr[n]>arr[n-1]){
            return n;
        }

        
        int low=1;
        int high=arr.size()-2;
        
  
        while(low<=high){
            int mid = low+((high-low)/2);
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            //left increasing
            else if(arr[mid]>arr[mid-1]&&arr[mid+1]>arr[mid]){
                low=mid+1;
            }
            //right decreasing
            else{
                high=mid-1;
            }
        }

        return -1;
        
    }

int main(){
    vector<int> arr = {3,5,3,2,0};
  
    int mid = peakIndexInMountainArray(arr);

    cout << "Binary Search Found Peak Moutain: "<< mid << endl;
    return 0;
}


//leetcode 852
//https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size()-1;
        if(n==1){
            return 0;
        }else if(arr[0]>arr[1]){
            return 0;
        }else if(arr[n]>arr[n-1]){
            return n;
        }
        int low=1;
        int high=arr.size()-2;
        
  
        while(low<=high){
            int mid = low+((high-low)/2);
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            //left increasing
            else if(arr[mid]>arr[mid-1]&&arr[mid+1]>arr[mid]){
                low=mid+1;
            }
            //right decreasing
            else{
                high=mid-1;
            }
        }

        return -1;
        
    }
};