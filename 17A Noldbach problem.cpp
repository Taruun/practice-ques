// Find divisors
// Check if divisors == 2; which are primes
// Push into vector
// Loop thorugh primes check if the sum of 2 neighbour primes = N and


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k; cin >> n >> k;
    vector<int>primes;

    for(int i = 2; i <= n; i++){
        if(is_prime(i)) primes.push_back(i);
    }

    int ans = 0;
    int m = primes.size();
    for(int i = 0; i < m-1; i++){
        int temp = primes[i] + primes[i + 1] + 1;
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(primes[j] == temp){
                flag = true;
                break;
            }
        }
        if(flag) ans++;
    }

    if(ans >= k) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}