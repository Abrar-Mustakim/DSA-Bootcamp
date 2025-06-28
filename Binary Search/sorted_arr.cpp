#include<bits/stdc++.h>
using namespace std;


int sorted_binary_search(vector<int> arr, int target, int low, int high){
    while(low<=high){
        int mid=low+ ((high-low)/2);
        if(arr[mid]==target){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            //left sorted
            if(arr[low]<=target && arr[mid]>=target){
                //sorted_binary_search(arr, target, low, mid-1);
                high=mid-1;
            }
            else{
                //sorted_binary_search(arr, target, mid+1, high);
                low=mid+1;
            }
        }else{
            //right sorted
            if(arr[mid]<=target && arr[high]>=target){
                //sorted_binary_search(arr, target, mid+1, high);
                low=mid+1;
            }
            else{
                //sorted_binary_search(arr, target, low, mid-1);
                high=mid-1;
            }
        }
    };
    return -1;

    
}

int main(){
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int low=0;
    int high=arr.size()-1;    
    int mid = sorted_binary_search(arr, 1, low, high);

    cout << "Binary Search Found: "<< mid << endl;
    return 0;
}


//letcode 33
//https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid = low + ((high-low)/2);
            if(nums[mid]==target){
                return mid;
            }
            if(nums[low]<=nums[mid]){
                //left sorted
                if(nums[low]<=target && nums[mid]>=target){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                //right sorted
                if(nums[mid]<=target && nums[high]>=target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
        
    }
};