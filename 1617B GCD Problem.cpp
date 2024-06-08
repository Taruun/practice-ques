// Find gcd where a + b + c = n
// Approach: 
// If the no is even it'll have 1 gcd because of 2 consecutive values
// So c = 1 can be added 
// a + b = n - 1
// eg: 18 = 17/2  = 8 + 9 + 1 is 18

// If the no is odd then n - 1 is even and even doesn't have 1gcd but 2


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    if(n % 2 == 0) 
        cout << (n - 1)/2 << " " << (n - 1)/2 + 1 << " "  << 1 << endl;
    else{
        int curr = (n - 1)/2;
        if(curr % 2 == 0)
            cout << curr - 1 << " " << curr + 1 << " " << 1 << endl; 
        else
            cout << curr - 2 << " " << curr + 2 << " " << 1 << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}