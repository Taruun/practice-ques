// Max sum we can get 3 and Ai is 10^6, so 3 * 10^6 = 3000000 so we go till 3 * 10^6 +1 = i.e. 300000001 
// Then we initialise them with all false 
// Then we add summa nd make that index true 
// make ans and loop through array and if we get true make ans++

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