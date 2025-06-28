#include<bits/stdc++.h>
using namespace std;


int find_min_binary_search(vector<int> arr){
    int min=INT_MAX;
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid = low+((high-low)/2);
        
        if(arr[mid]<min){
            min=arr[mid];
        }
        //left sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<min){
                min=arr[low];
            }
            low=mid+1;
        }else{
            //right sorted
            if(arr[mid+1]<min){
                min=arr[mid+1];
            }
            high=mid-1;
        }
    }
    return min;
}


int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    vector<int> arr_2 = {3,1,2};
    int min = find_min_binary_search(arr);
    int min_2 = find_min_binary_search(arr_2);
    cout << "The minimum is: " << min << endl;
    cout << "The minimum is {3,1,2}: " << min_2 << endl;
    return 0;
}




class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid = low+((high-low)/2);
            
            if(nums[mid]<min){
                min=nums[mid];
            }
            //left sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<min){
                    min=nums[low];
                }
                low=mid+1;
            }else{
                //right sorted
                if(nums[mid+1]<min){
                    min=nums[mid+1];
                }
                high=mid-1;
            }
        }
        return min;
        
    }
};



class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid = low+((high-low)/2);
            
  
            //left sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<min){
                    min=nums[low];
                }
                low=mid+1;
            }else{
                //right sorted
                if(nums[mid]<min){
                    min=nums[mid];
                }
                high=mid-1;
            }
        }
        return min;
        
    }
};