// Maximum minutes are allowed are 100 i.e only on hour so by default any hour will be 22:
#include <iostream>
using namespace std;

int main() {
    int k; cin >> k;
    
    int hour = 21;
    if(k >= 60) {
        hour = 22;
        k = k - 60;
    }
    cout << hour << ":";
    if (k < 10)
        cout << 0 << k << '\n';
    else
        cout << k << '\n';
        
    return 0;
}
