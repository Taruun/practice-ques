// 3
//   *  
//  *** 
// *****

// 3
// *****
//  *** 
//   *  

// 3
//   *  
//  *** 
// *****
// *****
//  *** 
//   * 
// combine both of them to get full diamond 

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
            
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
            
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        
        cout << endl;
    
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
            
        // we already know 2 * i + 1 is from we get stars but for inverted we reduce it by 2n 
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
            cout << "*";
            
        for (int j = 0; j < i; j++)
            cout << " ";
        
        cout << endl;
    
    }

    

    return 0;
}