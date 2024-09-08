#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  

    vector<pair<int, int>> days(n);  
    for (int i = 0; i < n; i++) {
        cin >> days[i].first >> days[i].second;  
    }

    int totalCost = 0;
    int minPrice = days[0].second;  


    for (int i = 0; i < n; i++) {
        minPrice = min(minPrice, days[i].second);  
        totalCost += days[i].first * minPrice;  
    }

    cout << totalCost << endl;
    return 0;
}
