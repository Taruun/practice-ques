// For coloumn
// First element to swap then postion

// For row
// First postion to swap then elements

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n][n];
    
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < n; j++){
            arr[i][j] = s[j] - '0';
        }
    }
    
    int prev = arr[0][0];
    
    // First coloumn
    for(int j = 0; j < n - 1; j++){
        arr[j][0] = arr[j+1][0];
    }
    
    // Last row
    for(int j = 0; j < n - 1; j++){
        arr[n-1][j] = arr[n-1][j+1];
    }
    
    // Last coloumn
    for(int j = n - 1; j > 0; j--){
        arr[j][n-1] = arr[j-1][n-1];
    }
    
    // First row
    for(int j = n - 1; j > 1; j--){
        arr[0][j] = arr[0][j-1];
    }
    
    arr[0][1] = prev;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}