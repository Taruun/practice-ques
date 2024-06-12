#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll a, b, k; cin >> a >> b >> k;
    
    vector<ll>facts;
    for(ll i = 1; i <= min(a, b); i++){
        if(a % i == 0 && b % i == 0){
            facts.push_back(i);
        }
    }
    
    sort(facts.begin(), facts.end());
    
    cout << facts[facts.size() - k] << endl;
    return 0;

    
}