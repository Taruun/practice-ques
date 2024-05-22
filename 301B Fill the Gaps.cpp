#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++){
        cout << arr[i] << " ";
        if(arr[i] > arr[i + 1]){
            int filling_values = arr[i] - 1;
            while(filling_values > arr[i + 1]){
                cout << filling_values << " ";
                filling_values--;
            }
        }
        else{ 
            int filling_values = arr[i] + 1;
            while (filling_values < arr[i + 1]){
                cout << filling_values << " ";
                filling_values++;
            }
        }
    }
    cout << arr[n - 1] << " ";
    return 0;
}