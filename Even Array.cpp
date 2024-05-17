#include <iostream>
using namespace std;

int main() {
    int tc; cin >> tc;
    
    while (tc--){
        int n; cin >> n;
        int arr[n];
        
        int even_index = 0, odd_index = 0, even_ele = 0, odd_ele = 0;
        int not_matching = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            
            if(i % 2 == 0)
                even_index++;
            else
                odd_index++;
                
            if(arr[i] % 2 == 0)
                even_ele++;
            else
                odd_ele++;
            
            if(i % 2 != arr[i] % 2)
                not_matching++;
        }
        if(even_index != even_ele || odd_index != odd_ele){
            cout << -1 << endl;
            continue;
        }
        
        cout << not_matching / 2 << endl;
        
    }
    return 0;
}