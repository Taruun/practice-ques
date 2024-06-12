// We need same remainder of divisors
// 2 < a < b < n
// All the even has 2 gcd so 2 and every prime is odd so n - 1 is even


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        int p; cin >> p;
        cout << 2 << " " << p - 1 << endl;
    }
    return 0;
}