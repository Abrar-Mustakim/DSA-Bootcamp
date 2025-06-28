#include<bits/stdc++.h>
using namespace std;

int nth_root(int root, int number){

    int low=1;
    int high=number;
    while(low<=high){
        long mid=low+((high-low)/2);
        long score=1;
        for(int i=0;i<root;i++){
            score*=mid;
            //cout<<score<<endl;
        }
        if(score==number){
            return mid;
        }else if(score>high){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;


}

int main(){
    int n=3;
    int m=27;
    int result = nth_root(n, m);
    cout << "result are: "<<result<<endl;
    return 0;
}