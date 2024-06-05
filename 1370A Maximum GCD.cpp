// GCD is greatest common divisor
// So if we take n=5; 
// we compare 1x1 1x2 1x3 1x4 1x5 2x1 2x2 2x3 2x4 2x5 3x1 3x2 3x3 3x4 3x5 4x1 4x2 4x3 4x4 4x5 5x1 5x2 53 5x4 5x5
// So we take all the divisors of that number let's say 2x4 so 2's divisors will be 1,2 and for 4's 1,2,4
// So gcd for above is 2
// So to solve this when a < b we fixate
// a        b
// |        |
// gcd     2xgcd

// So 2xgcd <= n; gcd = n/2 and we'll get a

// TC: O(1)


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    cout << n/2 << endl;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();

    return 0;
}