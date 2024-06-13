// (m1 % a) (m2 % a2) (m3 % a3)
//           0 -> n - 1

// In the range from 0 to n-1:
// To find the smallest number with the LCM property, we consider 0 as an LCM candidate.
// To find the largest number with the LCM property, we consider n-1 as an LCM candidate.




#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n; cin >> n;
    
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    ll sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i] - 1;
    
    cout << sum << endl;

    return 0;
}
