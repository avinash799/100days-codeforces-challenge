//18 th days of 100 days codeforces challenge
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
       int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
 
        int a = max(abs(x2 - x1), abs(y2 - y1));
        int area = a*a;
        cout << area << endl;
    }
    return 0;
    
}