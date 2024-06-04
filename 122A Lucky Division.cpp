// Take a number chek if it's divisible
// If it's divisble check if it's divisor is luck number or not i.e. 4 or 7

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