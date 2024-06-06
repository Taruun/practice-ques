// Linear search: (a, b) = (a - b, b) 
// So we update bigger value to the start and keep on doing this but it just a lot of ops
// Instead we % it and get the answer
// So if any one is 0 then other one is GCD



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a,b; cin >> a >> b;
    
    while (a > 0 && b > 0){
        if(a > b) a %= b;
        else b %= a;
    }
    
    if(a == 0) cout << b << endl;
    else cout << a << endl;
    
    return 0;
}