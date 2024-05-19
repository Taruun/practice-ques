#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Condition is for [0] and [2] because it's sorted so 2 is automatically sorted; vice versa
int main() {
    int arr[5]; // Because given condition arr will be 5 only 
    for (int i = 0; i < 5; i++) cin >> arr[i];
    sort(arr, arr + 5);
    if ((arr[0] == arr[2] && arr[3] == arr[4]) || arr[0] == arr[1] && arr[2] == arr[4])
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
        
    return 0;
}