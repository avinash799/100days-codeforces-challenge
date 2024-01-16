//8th day of 100 days codeforces challenge
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, l=1,r=1e9;
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++){
            int a,x;
            cin>>a>>x;
            if(a==1) 
            l=max(l,x);
            if(a==2)
            r=min(r,x);
            if(a==3)
            s.insert(x);
        }
        if(r<l){
            cout<<"0"<<endl;
            continue;
        }
        int ans=r-l+1;
        for(auto &i :s){
            ans-=(i>=l && i<=r);
            
        }
        cout<<ans<<endl;
    }
    return 0;
}