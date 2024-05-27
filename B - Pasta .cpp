#include <iostream>
using namespace std;


int main() {
    int n, m; cin >> n >> m;
    int a[n], b[m];
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    
    bool ans = true;
    for(int i = 0; i < m; i++){
        bool flag = false;
        for(int j = 0; j < n; j++){
            if(a[j] == b[i]){
                a[j] = -1;
                flag = true;
                break;
            }
        }
        if(!flag){
            ans = false;
            break;
        }
        
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}


// WITHOUT ANS

// int main() {
//     int n, m; cin >> n >> m;
//     int a[n], b[m];
    
//     for(int i = 0; i < n; i++) cin >> a[i];
//     for(int i = 0; i < m; i++) cin >> b[i];
    
//     for(int i = 0; i < m; i++){
//         bool flag = false;
//         for(int j = 0; j < n; j++){
//             if(a[j] == b[i]){
//                 a[j] = -1;
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag){
//             cout << "No" << endl;
//             return 0;
//         }
        
//     }
//     cout << "Yes" << endl;
//     return 0;
// }