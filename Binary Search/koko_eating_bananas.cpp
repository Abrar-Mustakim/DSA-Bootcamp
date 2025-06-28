#include<bits/stdc++.h>
using namespace std;


//brute force
int banana(vector<int> arr, int h){
    
    int maximum_elems=*max_element(arr.begin(),arr.end());
    
    int min=INT_MAX;

    for(int k=1; k<=maximum_elems;k++){
        int total_hour=0;
        for(int i=0;i<arr.size();i++){
            
            int piles=arr[i];
            while(piles>0){
                piles-=k;
                total_hour+=1;
            }
        }

        if(total_hour<=h){
            if(min>total_hour){
                min=total_hour;
            }
        }

    }

    return min;

}

int count_total_hours(vector<int>arr, int k, int h){
    
    
    int total_hour=0;
    for(int i=0;i<arr.size();i++){
        int piles=arr[i];
        // while(piles>0){
        //     piles-=k;
        //     total_hour+=1;
        // }

        total_hour += ((long long)piles+k-1)/k;
    }
    return total_hour;
}

int binary_search_banana(vector<int> arr, int h){
    int low=1;
    int high=*max_element(arr.begin(),arr.end());
    
    int min=INT_MAX;

    while(low<=high){
        int k = low+((high-low)/2);
        
        int total_hour=count_total_hours(arr, k, h);
        cout << "Total Hour in k: "<<k << " are: " <<total_hour<<endl;
        if(total_hour<=h && total_hour>0){
            cout<<total_hour<<" is smaller than H" <<endl;
            if(min>k){
                min=k;
                cout << "Min is: "<<min<<endl;
            }
            high=k-1;
        }else{
            low=k+1;
        }
    }
    return min;



}


int main(){
    vector<int> arr={805306368,805306368,805306368};
    int h=1000000000;
    //int k=banana(arr, h);
    //cout<<"Koko can Eat Banan per hour: "<< k <<endl;

    int l=binary_search_banana(arr, h);
    cout<<"Koko can Eat Banan per hour: "<< l <<endl;
    return 0;
}






class Solution {
public:
    int count_total_hours(vector<int>arr, int k){
        int total_hour=0;
        for(int i=0;i<arr.size();i++){
            total_hour += ((long long)arr[i]+k-1)/k;
        }
        return total_hour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        
        int min=INT_MAX;

        while(low<=high){
            int k = low+((high-low)/2);
            
            int total_hour=count_total_hours(piles, k);
            
            if(total_hour<=h && total_hour>0){
                if(min>k){
                    min=k;
                }
                high=k-1;
            }else{
                low=k+1;
            }
        }
        return min;
        
    }
};



//0ms
class Solution {
public:


    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int min=high;

        while(low<=high){
            int k = low+((high-low)/2);
            
            //int total_hour=count_total_hours(piles, k);
            long long total_hour=0;
            for(int pile:piles){
                total_hour += (pile+k-1)/k;
            }
            if(total_hour<=h && total_hour>0){
                
                min=k;
                
                high=k-1;
            }else{
                low=k+1;
            }
        }
        return min;
        
    }
};