#include <bits/stdc++.h> 
using namespace std;
//https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10


int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs==0){
        return 1;
    }else if(nStairs<0){
        return 0;
    }
    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
}