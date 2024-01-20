//12th day of 100 days codeforces challenges
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    ll n,x;
    cin>>n>>x;
    ll ans = 0;
    ll a, p=0;
    for(int i=0;i<n;i++){
        cin>>a;
        ans= max(ans, a-p);
        p=a;
    }
    ans=max(ans,2*(x-p));
    cout<<ans<<endl;
    
}
int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}