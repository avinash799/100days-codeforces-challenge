//3re day of 100days codeforces challenge

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        ll a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
           else if(s[i]=='C'){
               c++;
           }
        }
        
        if(a==0&&(b==c))
            cout<<"YES"<<endl;
        else if(c==0&&(a==b))
            cout<<"YES"<<endl;
        else if(b==a+c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
    
}