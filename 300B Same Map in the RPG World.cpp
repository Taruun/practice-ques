#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// s: The number of vertical shifts
// t: The number of horizontal shifts
// s,t will check each combination. 
// E.g. (s = 0, t = 0) (s = 0, t = 1) (s = 0, t = 2)

// H: The number of horizontal rows in the grids.
// W: The number of vertical columns in the grids.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int h,w;cin >> h >> w;
    int a[h][w], b[h][w];
    
    for(int i = 0; i < h; i++){
        string s; cin >> s;
        for(int j = 0; j < w; j++){
            if(s[j] == '.') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    for(int i = 0; i < h; i++){
        string s; cin >> s;
        for(int j = 0; j < w; j++){
            if(s[j] == '.') b[i][j] = 0;
            else b[i][j] = 1;
        }
    }
    
    for(int s = 0; s < h; s++){
        for(int t = 0; t < w; t++){
            bool found = true;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(a[i][j] != b[(i+s)%h][(j+t)%w]){
                        found = false;
                        break;
                    }
                }
                if(!found) break;
            }
            if(found){
                cout << "Yes" << endl;
                return 0;
            }
        }
        
    }
    cout << "No" << endl;

}