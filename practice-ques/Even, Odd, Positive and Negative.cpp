#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int eve = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        
        if (val % 2 == 0)
            eve += 1;
        else
            odd += 1;
        
        if (val < 0)
            neg += 1;
        else if (val > 0)
            pos += 1;
    }
    
    cout << "Even: " << eve << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}

