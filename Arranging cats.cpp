// 14th day of 100 days codeforces challenge
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s,s1;
        cin>>s>>s1;
        ll cnt1=0,cnt2=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0' && s[i]!=s1[i]) cnt1++;
            if(s1[i]=='0'&& s1[i]!=s[i]) cnt2++;
        }
        cout<<max(cnt1,cnt2)<<endl;
    }
    return 0;
    
}