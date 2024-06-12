// Make a divisible by b in how many moves
//  b - (a % b)  is basically determine if we need to go left or right
// a = 10 b = 4
// need to add +2 which is 12 to divide 4

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 void solve() {
     int a, b; cin >> a >> b;
     if(a % b == 0)
        cout << 0 << endl;
     else
        cout << b - (a % b) << endl;  
 }
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}


