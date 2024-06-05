// Take a number chek if it's divisible
// If it's divisble check if it's divisor is luck number or not i.e. 4 or 7

// TC: We're going n/10, n/100, n/1000 so We can generalize this as n/10^k, where 'k' represents the number of divisions we perform which will be atleast 1 number
// So 1/10^k = 1 --> n = 10^k 
// log(base 10)^N = k
// N(lo)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_lucky_number(int n){
    while(n != 0){
        if(n % 10 != 7 && n % 10 != 4){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    
    bool ans = false;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && is_lucky_number(i)){
            ans = true;
        }
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}