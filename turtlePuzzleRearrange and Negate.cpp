#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
   

    while (t--) {
        int n;
        cin >> n;  
        
        int array[n];
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        
        for (int i = 0; i < n; i++) {
            sum += abs(array[i]);  
        }

        cout << sum << endl; 
      
    }

   

    return 0;
}
