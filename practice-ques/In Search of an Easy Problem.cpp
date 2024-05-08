#include <iostream>
using namespace std;
 
int main() {
    int n; cin >> n;
    
    bool hard = false;
    for (int i = 0; i < n; i++){
        int vote; cin >> vote;
        
        if (vote == 1)
            hard = true;
    }
    
    if (hard)
        cout << "HARD";
    else
        cout << "EASY";
   
 
    return 0;
}
