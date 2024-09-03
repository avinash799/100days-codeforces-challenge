#include <iostream>
using namespace std;

void solve(int a, int b) {

    int ans = a + 2 * b;
    if (ans % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    if (a == 0 && (b % 2 != 0)) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int a, b;
        cin >> a >> b;  
        solve(a, b);
    }
    return 0;
}
