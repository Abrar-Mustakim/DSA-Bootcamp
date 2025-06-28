#include<bits/stdc++.h>
using namespace std;

int possiblity(vector<int> arr, int mid, int days){
    int day=1;
    int sums=0;

    
    for(int i: arr){
        if(sums+i > mid){
            day+=1;
            sums=i;
        }else{
            sums+=i;
        }
        
    }
    cout << "The Days is " << day << " in mid: " << mid << endl;
    if(day<=days){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days=5;

    int sum=0;
    for(int i:weights){
        sum+=i;
    }
    int low=*max_element(weights.begin(),weights.end());
    int high=sum;
    int capacity=0;
    while(low<=high){
        int mid=low+((high-low)/2);

        int possible=possiblity(weights, mid, days);
        if(possible==1){
            capacity=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    cout<<"THe Capacity will be: "<< capacity <<endl;;
    
}
