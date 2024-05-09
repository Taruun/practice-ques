#include <iostream>
using namespace std;
 
 
int main() {
    long long n; cin >> n;
    long long arr[n];
    
    arr[0] = 0;
    if (n != 1) // if arr is above 1 then only add 1st idx 1 val
        arr[1] = 1;
    
    for (int i = 2;  i < n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
        
    cout << arr[n - 1] << endl;
 
    return 0;
}
