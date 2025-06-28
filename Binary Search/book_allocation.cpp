#include<bits/stdc++.h>
using namespace std;

int authenticity(vector<int> arr, int mid, int k){
    // for(int i=0;i<arr.size();i++){
    //     int sum=0;
    //     for(int j=i;j<arr.size();j++){
    //         sum+=arr[j];
    //     }
    //     if(sum==mid){
    //         return 1;
    //     }
    // }
    int student=1;
    int sum=0;
    for(int i:arr){
        
        if(sum+i>mid){
            student+=1;
            sum=i;
        }else{
            sum+=i;
        }
    }

 
    if(student>k){
        return 0;
    }else{
        return 1;
    }
    return 0;
}

int binary_Search(vector<int> arr, int k){
    int low=0;
    int sum=accumulate(arr.begin(), arr.end(), 0);
    int high=sum;
    
    int ans=-1;

    while(low<=high){
        int mid=low+((high-low)/2);
        
        // if(((sum+mid-1)/mid)>=k){
        //     //find logic
        //     int authentic=authenticity(arr, mid, k);
        //     if(authentic==1){
        //         ans=mid;
        //         high=mid-1;
                
        //     }else{
        //         low=mid+1;
        //     }
            
        int authentic=authenticity(arr, mid, k);
        if(authentic==1){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ans;
}


int authentic(vector<int> arr, int mid, int k){
    int student=1;
    int sum=0;
    for(int i:arr){
        if(i>mid){
            return 0;
        }
        else if(sum+i>mid){
            student+=1;
            sum=i;
        }else{
            sum+=i;
        }
    }

    
    if(student>k){
        return 0;
    }else{
        return 1;
    }

}
int findPages(vector<int> &arr, int k) {
    // code here
    if(k>arr.size()){
        return -1;
    }
    int low=0;
    int high=0;
    for(int i:arr){
        high+=i;
    }
    if(k==1){
        return high;
    }
    
    int ans=-1;
    
    while(low<=high){
        int mid=low+((high-low)/2);
        int valid = authentic(arr, mid, k);

        if(valid==1){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
        
    }
    return ans;
}




int main(){
    vector<int> arr = {12, 34, 67, 90};
    int k=2;
    int result = binary_Search(arr, k);
    int result_1=findPages(arr, k);
    cout << "Minimum allocation possible in Max: " << result << endl;
    cout << "Minimum allocation possible in Max: " << result_1 << endl;
    return 0;
}