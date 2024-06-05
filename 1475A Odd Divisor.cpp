// We check if it's an odd number if yes then cout yes
// If it's an even number then we divide and check if it's divisor is odd other than 1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n; cin >> n;
    while(n % 2 == 0) n/=2;
    
    if(n != 1) cout << "YES" << endl;
    else cout << "NO" << endl;
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();
 
    return 0;
}
