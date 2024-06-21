#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 


int helper(int val, int n, int arr[]) {
    int left = 0, right = n - 1, ans = -1;
    while(left < right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] <= val){
            ans = mid;
            left = mid + 1;
        }else
            right = mid - 1;
    }
    return ans + 1;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        sort(arr, arr + n);
        
        int k; cin >> k;
        for(int i = 0; i < k; i++) {
            int l, r; cin >> l >> r;
            int ans1 = helper(l - 1, n, arr); 
            int ans2 = helper(r, n, arr); 
            cout << ans2 - ans1 << " ";
        }
    }
    return 0;
}
