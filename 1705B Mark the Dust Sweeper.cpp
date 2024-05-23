#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;
    
    while(tc--){
        int n; cin >> n;
        int arr[n + 1]; // i.e. n = 5 0 to 4 -> then 5 + 1 = 6
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        long long found_zero = 0;
        long long sum = 0;
        bool flag = false;

        // We don't want last value simce ever arr[i] going to add there
        for (int i = 0; i < n -1; i++){ 
            sum += arr[i];
            if(arr[i] > 0) flag = true;
            if(arr[i] == 0 && flag == true) found_zero++;
        }
        cout << sum + found_zero << endl;
    }

    return 0;
}