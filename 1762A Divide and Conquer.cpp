// even + even = even
// odd + even = odd
// odd + odd = even

// even number of odd = even sum
// odd number odd = change parity of number 

// PARITY make odd -> even and even -> odd 
// _ _ _  _ _ _ _ 
//   odd    even
// change PARITY by shifting one number from even to odd makes it even and odd
// _ _ _ _   _ _ _ 
//   even     odd

// Check if given no is odd
// If it's even odd numbers then sum is even; do nothing

// If it's odd cehage it's PARITY and that much ops require


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    
    int odd_num = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 != 0) odd_num++;
    }
    
    int ans = INT_MAX;
    
    // check if even odd num 
    // else change parity
    if(odd_num % 2 == 0) 
        cout << "0" << endl;
        
    else{
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                int count = 0;
                while(arr[i] % 2 == 0){ // divide till number is even once it's odd loop exits and parity changed
                    arr[i] /= 2;
                    count++;
                }
                ans = min(ans , count);
            }
            else{
                int count = 0;
                while(arr[i] % 2 != 0){
                    arr[i] /= 2;
                    count++;
                }
                ans = min(ans, count);
            }
        }
        cout << ans << endl;

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