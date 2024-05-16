#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < n; i++) cin >> arr2[i];
    
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    
    for (int i = 0 ; i < n; i++){
        if (arr1[i] != arr2[i]){
            cout << "no";
            return 0; 
        }
    }
    
    cout << "yes";
    
}

#include <iostream>
using namespace std;


int main() {
    int n,t; cin >> n >> t;
    string s; cin >> s;
    
    for (int i = 0; i < t; i++){
        for (int j = 0; j < n - 1; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j], s[j+1]);
                j++;
            }
        }
    }
    
    cout << s << endl;
    return 0;
}