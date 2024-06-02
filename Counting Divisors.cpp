// We could do it using simple if(n % i == 0) ans++; but it'll do it in O(n)
// Consider n = 18 so Factors of 18 are  1,2,3,6,9,18 so we do 
// 1 * 18
// 2 * 9
// 3 * 6
// From here values are repeating just in revrerse order
// 6 * 3
// 8 * 9
// 18 * 1
// So we go till sqrt(n) so sqrt of (18) is 4.2 i.e. i will go 1 - 4
// n/i == i if i is not the square root of n, count the other factor


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int ans = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                ans++;
                if(n / i != i) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}