#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int max_ele = arr[0];
    for(int i = 1; i < n; i++){
        // max_ele = max(max_ele, arr[i]);
        if(arr[i] > max_ele)
            max_ele = arr[i];
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (max_ele - arr[i]);
    }
    cout << ans << endl;
}