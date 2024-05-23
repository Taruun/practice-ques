// Mex is the smallest number which is not present in the array.
// For example, if the array is [0, 2, 3, 4], the Mex is 1 because it's the smallest number not present in the array.

// First, initialize an array to store counts of each value with 0s.
// Then, take input of the array elements.

// Next, count the frequency of each value in the array.

// Mex_a will be the count of 0 because it's simply not present in the array.
// Mex_b will be the count of 1 because if its count is 1, it's already in Mex_a since we are maximizing Mex_a.


#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;
    
    while(tc--){
        int n; cin >> n;
        int arr[n + 1];
        int count[101] = {0};
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            count[arr[i]]++;
        }
        
        int mex_a = 0;
        while(count[mex_a] >= 1) mex_a++; // We check every val if that val has 0 simply get that val 
        int mex_b = 0;
        while(count[mex_b] >= 2) mex_b++;
        
        cout << mex_a + mex_b << endl;
    }
    return 0;
}