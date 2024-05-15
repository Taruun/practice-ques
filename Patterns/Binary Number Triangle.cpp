// 3
// 0
// 10
// 010

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    
     for (int i = 1; i <= n; i++) {
         int start_point = 0;
         if (i % 2 == 0) start_point = 1;
         else start_point = 0;
         
         for (int j = 1; j <= i; j++){
             cout << start_point;
             start_point = 1 - start_point;
         } 
         cout << endl;

     }
        
        
    return 0;
}