// If all elements in arr are equal then it has euqal sum -> 2 2 2 2 2 2 can't reorder
// Otherwise we can do reorder i.e. sorting

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 


void solve() {
    ll n; cin >> n; n *= 2;
    ll arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    sort(arr, arr + n);
    
    ll firstN = 0;
    ll lastN = 0;
    
    for(int i = 0; i < n / 2; i++)
        firstN += arr[i];
    
    for(int i = n / 2; i < n; i++)
        lastN += arr[i];
        
    if(firstN != lastN) {
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    } else 
        cout << -1 << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    return 0;
}