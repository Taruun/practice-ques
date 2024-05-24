// Create two arrays:
// 1. An array to store the count of each character. Since there are 26 lowercase letters in English, we create an array of size 26.
// 2. Another array to initialize all elements to 0.

// To count the occurrences of each character:
// - Subtract 'a' from the current character.
// - For example, if the current character is 'a', 'a' - 'a' = 97 - 97 = 0, so we initialize the count array at index 0 to 1.
// - Similarly, if the current character is 'b', 'b' - 'a' = 98 - 97 = 1, so we initialize the count array at index 1 to 1.

// To get the character back from its count:
// - Add 'a' to the current index.
// - For example, if the current index is 1, adding 'a' to it gives 1 + 'a' = 98, which corresponds to the character 'b'.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    string s; cin >> s;
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i < s.size(); i++)
        arr[s[i] - 'a']++;
        
    string ans = "";
    for(int i = 0; i < 26; i++){
        char c = i + 'a';
        while(arr[i] > 0){
            ans+=c;
            arr[i]--;
        }
    }
    cout << ans << endl;
    return 0;
}
