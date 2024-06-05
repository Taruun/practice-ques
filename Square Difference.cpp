// Alice has axa so a^2 and bob has bxb b^2
// So we have to find a^2 - b^2
// a^2 - b^2 = (a^2 + b^2)(a^2 - b^2)
// We have 10^11 so for a and b it's taking 10^22 which we can't store inside any datatyper int nor long long
// So we make (a^2 - b^2) to  1; because prime requires divide by 1 and itself so we make it 1
// And (a^2 + b^2) make isPrime
// So we're in the limit it'll be 2x10^9 which in limit 



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x){
    if(x == 1) return false;
    for(long long i = 2; i * i <= x ; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void solve(){
    long long a, b; cin >> a >> b;
    if((a - b == 1) && (isPrime(a + b))) cout << "YES" << endl;
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