//11th day of 100 days codeforces challenge

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ll t , q , x , y , i , n , m ;
   cin>>n>>m;
   ll a[n+18];
   a[0]=0;
   for(i=1;i<=n;i++){
     cin>>a[i];
   }
    sort(a,a+n+1);
    for(i=1;i<=n;i++){
     a[i]+=a[i-1];
    }
    for(i=0;i<m;i++){
     cin>>x>>y;
     cout<<a[n-x+y]-a[n-x]<<endl;
    }
}