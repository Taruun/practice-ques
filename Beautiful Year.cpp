#include <iostream>
using namespace std;

int main() {
    int y; cin >> y;
    for (int i = y + 1; i < 10000; i++){
        int freq[10];
        for (int j = 0; j < 10; j++){
            freq[j] = 0;
        }
        
        int year = i;
        while (year > 0){
            int digit = year % 10;
            freq[digit]++;
            year /= 10;
        }
        
        int flag = 0;
        for (int i = 0; i < 10; i++){
            if(flag == 1){
                flag++;
                break;
            }
        }
        if(flag == 0){
            cout << i << '\n';
            break;
        }
        
    }
    return 0;
}

// Good Appraoch
#include <iostream>
using namespace std;
 
int main() {    
    int year; cin >> year;
    
    while(true) {
        year++;
        int a = year / 1000;
        int b = year / 100 % 10;
        int c = year / 10 % 10;
        int d  = year % 10;
        
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    
    cout << year << endl;
    return 0;
}
