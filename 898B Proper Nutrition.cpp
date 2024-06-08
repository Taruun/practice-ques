#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Xa + Yb = N
// X = (N - Yb) / a;
// Check if (N - Yb) / a is a positive integer 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n, a , b; cin >> n >> a >> b;
    
    long long X = -1, Y;
    for(Y = 0; Y < n; Y++){
        if((n - Y * b) % a == 0 && n - Y * b >= 0){
            X = (n - Y * b) / a;
            break;
        }
    }
    
    if(X == -1)cout << "NO" << endl;
    else cout << "YES" << endl <<  X << " " << Y << endl;
    return 0;
}