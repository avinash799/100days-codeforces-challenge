//16th day of 100 days codeforces challenge
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        string s;
        cin>>s;
        string s1;
        if(s[0]=='_'){
            s1="^";
            ans++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='_'&&s1.back()=='_'){
                s1+='^';
            }
            s1+=s[i];
        }
        if(s1.size()==1){
            s1+='^';
        }
        if(s1.back()=='_'){
            s1+='^';
        }
        cout<<s1.size()-s.size()<<endl;
    }
    return 0;
    
}