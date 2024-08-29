#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s; 

    int ans = 0;
    int cnt = 0;

    for (char c : s) {
        if (c == 'x') {
            cnt++;
        } else {
            if (cnt >= 3) {
                ans += (cnt - 2); 
            }
            cnt = 0;  
        }
    }
    
    
    if (cnt >= 3) {
        ans += (cnt - 2);
    }

    cout << ans << endl;

    return 0;
}
