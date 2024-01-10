


//2nd day of 100days codeforces challenge

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n;
    string s;
    cin>>s;
     sort(s.begin(),s.end());
     x=s.back();
     cout<<abs(x-96)<<endl;
     
    }
    return 0;
}