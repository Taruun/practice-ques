#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    char dir = 'r';
    int x =y = 0;
    
    for (int i = 0; i < n; i++){
        if(s[i] == 'S'){
            if(dir == 'r') x++;
            else if(dir == 'l') x--;
            else if(dir == 't') y++;
            else y--;
        }
        else{
            if(dir == 'r') dir = 'd';
            else if(dir == 'l') dir = 't';
            else if(dir == 't') dir = 'r';
            else dir = 'l';
        }
    }
    
    cout << x << " " << y << endl;
    return 0;
}