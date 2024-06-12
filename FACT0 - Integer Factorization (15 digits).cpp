// Eliminate all the even numbers 
// Start from even prime number 3
// n > 2 i.e. n is already prime return

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n = -1;
    while( n != 0) {
        cin >> n;
        if(n == 0) break;
        
        map<ll,ll>map;

        while(n % 2 ==0){
            n /= 2;
            map[2]++;
        }
        
        for(ll i = 3; i * i <= n; i+=2){
            while(n % i == 0){
                n /= i;
                map[i]++;
            }
        }
        
        if(n > 2) map[n]++;
        
        for(auto it: map) 
            cout << it.first << "^" << it.second << endl;

    }
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    solve();
    
    return 0;
}
