// Safety check to avoid overflow upper_bound / arr[i]
// Instead upper_bound * arr[i]


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long  

void solve() {
    ll n; cin >> n;
    ll upper_bound = 1e18;
    
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) {
            cout << 0 << endl;
            return;
        }
    }
    
    ll prod = 1;
    for(int i = 0; i < n; i++){
        if(prod > upper_bound / arr[i]) { 
            cout << -1 << endl;
            return;
        }
        else 
            prod *= arr[i];
    }
    
    cout << prod << endl;
}    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    solve();
    
    return 0;
}