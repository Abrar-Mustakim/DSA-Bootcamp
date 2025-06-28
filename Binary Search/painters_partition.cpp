#include <bits/stdc++.h>
using namespace std;

// Implement the painter_partition method here 

int validations(vector<int> boards, int mid, int k){
    int painter=1;
    int sum=0;
    for(int i:boards){
        if(sum+i>mid){
            painter+=1;
            sum=i;
        }else{
            sum+=i;
        }
    }
    if(painter>k){
        return 0;
    }else{
        return 1;
    }
}
int painter_partition(vector<int> boards, int k){
    if(k>boards.size()){
        return -1;
    }
    int low=*max_element(boards.begin(), boards.end());
    int high=accumulate(boards.begin(), boards.end(), 0);
    int ans=-1;
    
    while(low<=high){
        int mid=low+((high-low)/2);
        int valid = validations(boards, mid, k);
        if(valid==1){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    return ans;
}


int main() {
    // Write your code here
    int t;
    cin>>t;
    while(t--){
        int N, k;
        cin >> N >> k;
        vector<int> boards(N);
        for (int i = 0; i < N; i++)
            cin >> boards[i];
        

        
        cout << painter_partition(boards, k) << endl;
    }
    return 0;
}