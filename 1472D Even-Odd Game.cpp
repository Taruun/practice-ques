#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define ll long long 


void solve() {
    ll n; cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    ll aliceSum = 0;
    ll bobSum = 0;
    
    sort(arr, arr + n);
    reverse(arr, arr + n);
    
    string turn = "A";
    for(int i = 0; i < n; i++){
        if(turn == "A"){
            if(arr[i] % 2 == 0)
                aliceSum += arr[i];
            turn = "B";
        }else{
            if(arr[i] % 2 != 0)
                bobSum += arr[i];
            turn = "A";
        }
    }
    if(aliceSum > bobSum)
        cout << "Alice" << endl;
    else if(aliceSum == bobSum)
        cout << "Tie" << endl;
    else
        cout << "Bob" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--) solve();
    
    return 0;
}