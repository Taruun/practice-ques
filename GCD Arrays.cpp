// We have to find odd even

// To have > 1 gcd 2 is gcd of every even number
// So we have to find all the odd numbers 
// Due to constrains we cannot use for loop

// 1. Find total number
// So to find total numbers (l - r + 1)
// l=3 r=5 [3 4 5] = 5 - 3 + 1 = 3

// 2. Check if total number is odd or even
// If total number are even 
// to get odd no = total_number/2
// 3 6 = [3 4 5 6] = 4/3 = 2 odd no

// If total number are odd 
// then  1. check how many are odd  2. how many are even 
// if total no= 5
// 3 even 2 odd || 3 odd 2 even
//         tn/2      tn/2+1


// So extra odd number is extra operation

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l, r, k; cin >> l >> r >> k;
    
    if(l == r){
        if(l == 1) cout << "NO" << endl;
        else cout << "YES" << endl;
        return;
    }
    
    int num_odd = (r - l + 1);
    if(num_odd % 2 == 1){
        num_odd /= 2;
        if(l % 2 == 1 || r % 2 == 1) num_odd++;
    }
    else num_odd /= 2;
    
    if(num_odd <= k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();

    
    return 0;
}