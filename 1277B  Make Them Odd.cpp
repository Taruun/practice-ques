#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    ll arr[n];
    
    for(ll i = 0; i < n; i++) cin >> arr[i];
    
    set<ll>st;
    for(ll i = 0; i < n; i++) {
        while(arr[i] % 2 == 0) { 
            st.insert(arr[i]);
            arr[i] /= 2;
        }
    }
    
    cout << st.size() << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();
    
    return 0;
}