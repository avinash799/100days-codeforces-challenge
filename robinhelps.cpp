#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
    
    int cur = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0 && cur > 0) {
            ans++;
            cur--;
        }
        if (a[i] >= k) {
            cur += a[i];
        }
    }

    cout << ans << endl;
}

 int main() {
    
 
    int t = 1;
    cin >> t;
    while (t--) {
     
        solve();
    }
    return 0;
}