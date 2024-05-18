// It's a ceil logic
// If 012345 then for 0 1 2 0 is closer 
// and 3 4 5 5 is closer so diff is always 2 

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    cout << ((n + 2) / 5 )* 5 << endl;
    return 0;
}