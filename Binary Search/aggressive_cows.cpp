#include<bits/stdc++.h>
using namespace std;


// 1
// 5 3
// 1
// 2
// 8
// 4
// 9


int possible(vector<int> arr, int cows, int k){
    sort(arr.begin(), arr.end());

    //int min=*min_element(arr.begin(),arr.end());
    int min=arr[0];
    int count=1;
    
    for(int i=1;i<arr.size();i++){
        if(arr[i]-min>=k){
            count+=1;
            min=arr[i];
        }
    }

    //cout << "Counts are: "<<count<<endl;
    if(count>=cows){
        return 1;
    }else{
        return 0;
    }

}

int binary_search(vector<int> arr, int cows){
    int low=1;
    int high=*max_element(arr.begin(), arr.end());
    int ans=0;
    while(low<=high){
        int mid=low+((high-low)/2);
        //cout << "Mid: " << mid << endl;
        int possibility=possible(arr, cows, mid);
        //cout << "Possiblity in this mid: " << possibility<<endl;
        if(possibility==1){
            ans=mid;
            low = mid+1;
        }else{
            high=mid-1;
        }    
    }
    return ans;
}


int main(){

    //vector<int> arr = {1, 2, 8, 4, 9};
    //int cows=3;
    
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n, cows;
        cin >> n >> cows;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int n;
            cin >> n;
            arr.push_back(n);
        }
        
        int largest_minimum=binary_search(arr, cows);
        //int largest_minimum=possible(arr, cows, 3);
        cout << "Largest Distance is: " << largest_minimum << endl;
        

    }
    return 0;
    
    
}