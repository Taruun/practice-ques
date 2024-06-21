#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// int get_gcd(int num1, int num2) {
//     if (num1 == 0) return num2;
//     return get_gcd(num2 % num1, num1);
// }

void solve() {
   int n; cin >> n;
   int arr[n];
   int gcd = 0;
   
   for(int i = 0; i < n; i++){
       cin >> arr[i];
       gcd = __gcd(gcd, arr[i]); 
   }
   
   int ans = 0;
   for(int i = 0; i < n; i++){
       int temp = arr[i] / gcd;
       while(temp % 2 == 0){
           temp /= 2;
           ans++;
       }
       while(temp % 3 == 0){
           temp /= 3;
           ans++;
       }
       if(temp != 1){
           cout << -1 << endl;
           return;
       }
   }
   
   cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    return 0;
    
}