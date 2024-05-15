// 6
// ******
// *****
// ****
// ***
// **
// *

// i = 1 => j = 1 to 6 ==> will print ecery col
// i = 2 => j = 2 to 6 ==> will start j from 2 ==> 2 to 6 = 4 
// ==> for (int j = 2; j <= 6; j++) this will lead to calcuate inner loop only have 4 stars

// i = 3 => j = 3 to 6 ==> will start j from 3 ==> 3 to 6 = 3 
// ==> for (int j = 3; j <= 6; j++) this will lead to calcuate inner loop only have 3 stars


#include <iostream>
using namespace std;

int main() {
    
    int n; cin >> n;
    
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

// Half Pyramid
#include <iostream>
using namespace std;

int main() {
    
    int n; cin >> n;
 
    for (int i =1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    
    return 0;
}