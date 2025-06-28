#include<bits/stdc++.h>
using namespace std;

int brute_force(vector<int> arr, int k){
    

    for(int i=0;i<arr.size();i++){
        if(arr[i]<=k){
            k+=1;
        }else{
            break;
        }
    }
    return k;
}
int binary_search(vector<int> arr, int k){
    int low=0;
    //int high = *max_element(arr.begin(), arr.end());
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(arr[mid]-(mid+1) <= k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    //return low+k;
    return high+1+k;
}

int main(){
    vector<int> arr={2,3,4,7,11};
    int k=5;
    //int result=brute_force(arr, k);
    int result=binary_search(arr, k);
    cout << "The results are: "<<result<<endl;
}



class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int low=0;
        //int high = *max_element(arr.begin(), arr.end());
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(arr[mid]-(mid+1) < k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low+k;
    }
        
    
};