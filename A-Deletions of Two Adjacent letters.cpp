// 5th day of 100days codeforces challenge
 
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
      cin>>s;
         char c;
         cin>>c;
         for(int i=0;i<s.size();++i){
             if(s[i]==c &&i%2==0 &&(s.size()-i-1)%2==0){
                 cout<<"YES"<<endl;
                 return ;
             }
         }
         cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
    
}