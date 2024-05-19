// It's a ceil logic
// If 012345 then for 0 1 2 => 0 is closer 
// And 3 4 5 => 5 is closer so diff is always 2 
// By dividing 5 we always get same number till +4
// Multiply by 5 is because water station at every 5 km
// Adding 2 to the value of N before dividing serves to ensure that the division operation rounds up to the next integer if the remainder after division is greater than or equal to 3. This adjustment helps to mimic the behavior of the ceil function for positive integers.

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    cout << ((n + 2) / 5 )* 5 << endl;
    return 0;
}