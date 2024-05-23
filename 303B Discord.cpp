#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int arr[m][n];
    
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){ // To avoid duplication we loop through n
            bool flag = false;
            for(int k = 0; k < m; k++){
                for(int l = 0; l < n - 1; l++){
                    if(arr[k][l] == i && arr[k][l+1] == j) flag = true;
                    if(arr[k][l] == j && arr[k][l+1] == i) flag = true;
                }
            }
            if(!flag) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}