// 7,5,4,2,10
// First we pair it with its index {7,0} {5,1} {4,2} {2,3} {10.4} to have access of its original index

// Then we sort it; it'll sort based on the first value {2,3} {4,2} {5,1} {7,0} {10,4}

// We loop through backwards then we place the tallest building at +1, and then -1, +2, -2, +3, -3 in this pattern

// We make the curr_coord (distance_between_the_headquarters) the second value, i.e., index

// {10.4}
// Then we calculate the time with 2 x (no_time_building_visited)(distance_between_the_headquarters)
// (2 x 10)(4)
// 2 because we're calculating two-way

// To place coords, we add positive numbers alternatively. Vice versa for negative so we can get +1 and the -1, +2, -2, +3, -3

// if (curr > 0) curr *=-1;
// else{
//     curr *=-1;
//     curr++;
// }


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<pair<int, int>>v;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            v.push_back({a, i});
        }
        vector<int>ans(n);
        sort(v.begin(), v.end());
        long long current_building_distance = 1;
        long long total_time = 0;
        
        for(int i = n-1; i >= 0; i--){
            ans[v[i].second] = current_building_distance;
            total_time+=(2 * (v[i].first*abs(current_building_distance)));

            // curr_coords is 1 >0
            // 1 x -1 = -1
            if (current_building_distance > 0) current_building_distance *=-1; 

            // curr_coords is -1 <0
            // -1 x -1 = -1 + 1 = 2
            // coords are 1 -1 2 -2 3 -3
            else{
                current_building_distance *=-1;
                current_building_distance++;
            }
        }
        
        cout << total_time << endl;
        cout << 0 << " ";
        for(int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    

    return 0;
}

// Without Vector
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int tc; cin >> tc;
//     while(tc--){
//         int n; cin >> n;
//         pair<int, int> visits[n];
//         for(int i = 0; i < n; i++){
//             int a; cin >> a;
//             visits[i] = {a, i};
//         }
        
//         sort(visits, visits + n);
        
//         int ans[n];
//         long long curr_coords = 1;
//         long long total_time = 0;
//         for (int i = n-1; i >= 0; i--){
//             ans[visits[i].second] = curr_coords;
//             total_time+=(2 * (visits[i].first * abs(curr_coords)));
//             if(curr_coords > 0) curr_coords *=-1;
//             else{
//                 curr_coords *=-1;
//                 curr_coords++;
//             }
//         }
        
//         cout << total_time << endl;
//         cout << 0 << " ";
//         for(int i = 0; i < n; i++) cout << ans[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }