// Take input for alarms, hours, and minutes
// Convert hours for better calculation 
// Convert sleep time hours into minutes (e.g., 6:13 -> 6*60 + 13)
// Take input for alarms and convert them into minutes
// Calculate the difference between alarm time - sleep time to determine the duration of sleep
// If the difference is negative, it means the alarm is set for the next day, so  +=1440 minutes (24 hours)
// Convert the duration of sleep back to hours and minutes (e.g., ans / 60 for hours and ans % 60 for minutes )


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; cin >> tc;
    
    while(tc--){
        int no_of_alarms, hours, mins;
        cin >> no_of_alarms >> hours >> mins;
        int sleep_time = hours * 60 + mins;
        int ans = INT_MAX;
        
        for(int i = 0; i < no_of_alarms; i++){
            int hours_i, mins_i; 
            cin >> hours_i >> mins_i;
            
            int alarm_time = hours_i * 60 + mins_i;
            
            int diff = alarm_time - sleep_time;
            if(diff < 0) diff += 24 * 60;
            
            ans = min(ans, diff);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}