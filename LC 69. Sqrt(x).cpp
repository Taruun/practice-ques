// long long since mid * mid 

class Solution {
public:
    int mySqrt(int x) {
        long long left = 0, right = x;
        long long ans;
        while(left <= right) {
            long long mid = (left + right) / 2;
            if(mid * mid <= x){
                left = mid + 1;
                ans = mid;
            } else{
                right = mid - 1;
            }
        }
        return ans;
    }
};