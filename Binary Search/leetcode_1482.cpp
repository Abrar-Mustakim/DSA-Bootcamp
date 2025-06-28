#include<bits/stdc++.h>
using namespace std;


int brute_force(vector<int> arr, int m, int k){
    if(m*k > arr.size()){
        return -1;
    }
    
    int max_days = *max_element(arr.begin(),arr.end());
    int min_days=max_days;
    for(int i=1;i<=max_days;i++){
        vector<int> new_arr(arr.size());
        for(int j=0;j<arr.size();j++){
            if(arr[j]<=i){
                new_arr[j]=1;
            }
        }

        int count=0;
        int bouque=0;
        for(int q=0;q<new_arr.size();q++){
            if(new_arr[q]==1){
                count+=1;
            }else if(new_arr[q]!=1){
                count = 0;
            }

            if(count==k){
                bouque+=1;
                count=0;
            }


        }
        if(bouque>=m){
  
                if(min_days>i){
                    min_days=i;
                    
                }
            }
    }

    
    

    return min_days;
}


int binary_search(vector<int> bloomDay, int m, int k){
    if((long long)m*(long long)k > bloomDay.size()){
        return -1;
    }
    
    int max_days = *max_element(bloomDay.begin(),bloomDay.end());
    int min_days=max_days;


    int low=*min_element(bloomDay.begin(),bloomDay.end());
    int high=max_days;


    while(low<=high){
        int mid = low+((high-low)/2);
        int count=0;
        int bouque=0;
        for(int j=0;j<bloomDay.size();j++){
            if(bloomDay[j]<=mid){
                count+=1;
            }else{
                bouque+= (int)(count/k);
                count = 0;
            }
        }
        
        bouque+= (int)(count/k);
                


        

        if(bouque>=m){
  
            min_days=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    
    

    return min_days;

}



int main(){
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3;
    int k = 1;
    int result = binary_search(bloomDay, m, k);
    cout << "Max Time will Take "<< result << endl;
    return 0;
}