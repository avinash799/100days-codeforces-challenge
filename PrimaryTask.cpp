#include<bits/stdc++.h>
using namespace std;

void solve(){
       string s;
        cin>>s;
        int n=s.length();
        if(n<=2){
            cout<<"NO"<<endl;
            return;
         
          
        }
        if(s[0]=='1' && s[1]=='0'){
            string s1="";
            for(int i=2;i<n;i++){
                s1+=s[i];
                
            }
            if(s1=="1" || s1[0]=='0'){
                cout<<"NO"<<endl;
                return;
               
                
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            
            cout<<"NO"<<endl;
            return;
            
        }
    }

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
     

}