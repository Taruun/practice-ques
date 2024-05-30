// We can get a maximum sum of 3, and Ai is 10^6, so 3 * 10^6 = 3000000. 
// Therefore, we iterate up to 3 * 10^6 + 1, i.e., 3000001.
// Then we initialize them all as False.
// Next, we add the sum and mark that index as True.
// Finally, we initialize ans and loop through the array, incrementing ans if we encounter True.


#include <iostream>
using namespace std;
bool count[30000001];

int main() {
    int n, w; cin >> n >> w;
    int nums[n];
    
    for(int i = 0; i < n; i++) cin >> nums[i];
    
    for(int i = 0; i < 30000001; i++) count[i] = false;
    // bool count[w + 1] = {false};
    
    for(int i = 0; i < n; i++) count[nums[i]] = true;
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++)
            count[nums[i] + nums[j]] = true;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++)
                count[nums[i] + nums[j] + nums[k]] = true;

        }
    }
    
    int ans = 0;
    for(int i = 1; i <= w; i++){
        if(count[i] == true)
            ans++;
    }
    
    cout << ans << endl;
    return 0;
}