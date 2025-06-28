#include<bits/stdc++.h>
using namespace std;


int find_single_binary_search(vector<int> arr){
    if(arr.size()==1){
        return arr[0];
    }else if(arr[0]!=arr[1]){
        return arr[0];
    }else if(arr[arr.size()-1]!=arr[arr.size()-2]){
        return arr[arr.size()-1];
    }
    int low=1;
    int high=arr.size()-2;
    
    while(low<=high){
        int mid = low+((high-low)/2);
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        //(even, odd)
        else if((mid%2!=0 && arr[mid-1]==arr[mid]) ||
                (mid%2==0 && arr[mid]==arr[mid+1]) ){
            //left standing
            //element at right
            low=mid+1;
        }
        //(odd, even)
        else if((mid%2!=0 && arr[mid]==arr[mid+1])||(mid%2==0 && arr[mid]==arr[mid-1])){
            //right standing
            //element at left
            high=mid-1;
        }
    }

    return -1;

}


int main(){
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int single = find_single_binary_search(arr);
    cout << "The single elem is: " << single << endl;

    return 0;
}


