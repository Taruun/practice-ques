#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int tc; cin >> tc;
    
    while(tc--){
        int n, k; cin >> n >> k;
        int arr[n];
        
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        if(is_sorted(arr, arr + n) || k > 1) // k is a no of ops if k=1 then it's already sorted
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}