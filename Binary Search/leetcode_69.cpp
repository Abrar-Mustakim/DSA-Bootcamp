using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int low=0;
        int high=x;
        while(low<=high){
            long mid=low+((high-low)/2);
            long sqrt = mid*mid;
            if(sqrt==x){
                return mid;
            }else if(sqrt<x){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        //return low-1;
        return high;
    }
};