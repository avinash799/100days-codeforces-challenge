//4th days of 100days codeforces challenge

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll array[26];
        ll i ,n=s.size(),cnt=0;
        for(int i=0;i<n;i++)
            array[s[i]-'a']=i;
            string s1;
            cin>>s1;
            for(int i=1;i<s1.size();i++)
                cnt+=abs(array[s1[i]-'a']-array[s1[i-1]-'a']);
            cout<<cnt<<endl;
            
        
    }
    return 0;
    
}