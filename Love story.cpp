#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string g="codeforces";
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
       for(int i=0;i<s.size();i++){
          if(s[i]==g[i]){
              continue;
          }
          else{
              cnt++;
          }
       }
       cout<<cnt<<endl;
       
       
        
        
    }
    return 0;
    
}