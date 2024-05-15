// 3
// *
// **
// ***

// 3
// 1
// 12
// 123

// 3
// 1
// 22
// 333

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
            
            // cout << j;  FOR SECOND APPROACH

            // cout << I;  FOR THIRD APPROACH

        }           
        cout << endl;
    
    }
    return 0;
}


// 3
// ***
// **
// *

// 3
// 123
// 12
// 1
#include <iostream>
using namespace std;

// n - i + 1 || n - row + 1
int main() {
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++){
        for(int j = 1; j < n -i + 1; j++){
            cout << "*";
        }           
        cout << endl;
    
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n -i + 1; j++){
            cout << j;
        }           
        cout << endl;
    
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    
    // Example n = 5; To get next stars print after 5 need this formula 2 * n - 1; 
     for (int i = 1; i <= 2 * n - 1; i++) {
         
         int no_stars = i;
         if (i > n) no_stars = 2 * n - i;
         // If i exceeds 5 then we 2 * n - i ==> 2 * 5 - 6 => 4
         
         for (int j = 1; j <= no_stars; j++){
            cout << "*";
        }
        
        cout << endl;
    
    }

    

    return 0;
}