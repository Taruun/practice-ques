
// 4 6
// ******
// *    *
// *    *
// ******

#include <iostream>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    
    for (int i=1; i <= m; i++)
        cout << "*";
    cout << endl;
    
     for (int i=1; i <= n-2; i++){
         cout << "*";
         for (int j = 1; j <= m-2; j++)
            cout << " ";
         cout << "*";
    cout << endl;
     }
    
    for (int i=1; i <= m; i++)
        cout << "*";
    cout << endl;
    
    return 0;
}


