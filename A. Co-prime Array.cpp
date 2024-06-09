// 2 7 28
// Check if their gcd is 1
// If not then insert 1 after arr[i]
// arr[i], 1, arr[i + 1]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll num1, ll num2) {
    if(num1 == 0) return num2;
    return gcd(num2 % num1, num1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n; cin >> n;
    ll arr[n], pos[n], count = 0;
    
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        pos[i] = 0;
    }
    
    for(ll i = 0; i < n - 1; i++){
        if(gcd(arr[i], arr[i + 1]) != 1){
            pos[i] = 1;
            count++;
        }
    }
    
    cout << count << endl;
    for(ll i = 0; i < n; i++){
        cout << arr[i] << " ";
        if(pos[i]) cout << 1 << " ";
    }
    cout << endl;
    return 0;
}
