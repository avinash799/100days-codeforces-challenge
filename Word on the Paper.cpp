//7th day of 100days codeforces challenge

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char ch[64];
    int n=sizeof(ch);
    while(t--){
        for(int i=0;i<n;i++){
            cin>>ch[i];
        }
        string ans="";
        for(int i=0;i<n;i++){
            if(ch[i]>=97 && ch[i]<=122){
                ans+=ch[i];
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
    
}
