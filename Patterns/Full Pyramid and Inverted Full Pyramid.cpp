#include <iostream>
using namespace std;

// combine both get we solid pyramid 
int full_pyramid() {

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        
        int no_stars = i;
        int no_spaces = n - i;
                        
        for (int j = 1; j <= no_spaces; j++)
            cout << " ";
            
        for (int j = 1; j <= no_stars; j++)
            cout << "* ";

        cout << endl;
    }

    
    return 0;
}

int inverted_full_pyramid() {

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        
        int no_stars = n - i + 1;
        int no_spaces = i;
                        
        for (int j = 1; j <= no_spaces; j++)
            cout << " ";
            
        for (int j = 1; j <= no_stars; j++)
            cout << "* ";
        
        cout << endl;
    }

    
    return 0;
}
