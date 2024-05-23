// Initialize pos_val to 0 to keep track of the sum of positive values encountered so far.
// If the current element is positive, add its value to pos_val.
// If the current element is negative:

// If pos_val is greater than or equal to the absolute value of the current element, subtract the absolute value of the current element from pos_val.

// If pos_val is less than the absolute value of the current element, calculate the difference between the absolute value of the current element and pos_val. Add this difference to remaining_neg_val, which keeps track of the remaining negative values. Then set pos_val to 0.

#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;
    
    while(tc--){
        int n; cin >> n;
        int arr[n + 1];
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        long long pos_val = 0;
        long long remaining_neg_val  = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] >=0) 
                pos_val += arr[i];  
            else{
                if(pos_val >= abs(arr[i]))
                    pos_val -= abs(arr[i]);
                else{
                    remaining_neg_val += abs(arr[i]) - pos_val;
                    pos_val = 0;
                }
            }
        }
        cout << remaining_neg_val<< endl;
    }
    return 0;
}