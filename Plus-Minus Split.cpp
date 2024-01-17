//9th day of 100 days codeforces challenge
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 0, cnt2 = 0;
        for (ll i = 0; i < n; i++) {
            if (s[i] == '+') {
                cnt++;
            } else {
                cnt2++;
            }
        }

        cout << abs(cnt - cnt2) << endl;
    }

    return 0;
}