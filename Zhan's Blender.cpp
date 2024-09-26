#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        y=min(x,y);
        cout<<(n+y-1)/y<<endl;
    }
    return 0;

}