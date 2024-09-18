#include <bits/stdc++.h>
using namespace std;
#define ll long long

//for sum of n natural no
ll sumN(int n)
{
    return 1LL * n * (n + 1) / 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        ll x;
        cin >> n >> k >> x;

        // auto sumN = [&](int n) -> ll {
        //     return 1LL * n * (n + 1) / 2;
        // };

        ll minsum = sumN(k);
        ll maxsum = sumN(n) - sumN(n - k);

        if (x >= minsum && x <= maxsum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
