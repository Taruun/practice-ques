// In the range of [1, N] if we want to find numbers that are divisible by x then [ N / X] 
// E.g. [1, 20] which are divisible by 2 
// 20 / 2 = 10

// If need to find 1 to N then we can do [1,  R] - [1, L - 1 ]
// E.g. A = 20 | B = 60
// 1         20          60
// ----------- ------------
// Cancelling     And we numbers in the range A and B
// this 
// numbers  

// Check if there are 2 numbers that are divisible by x


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll func(ll a, ll b, ll ans) {
    return (b / ans) - ((a - 1) / ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll a, b; cin >> a >> b;
    
    ll ans = b;
    while(func(a, b, ans) < 2) ans--; // < 2 since we want 2 numbers A and B
    
    cout << ans << endl;
    return 0;
}