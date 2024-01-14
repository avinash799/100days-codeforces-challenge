//6th day of 100days of codeforces challenge

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2;
    cin>>s>>s1>>s2;
    s.append(s1);
   sort(s.begin(),s.end());
   sort(s2.begin(),s2.end());
   if(s==s2){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
    return 0;
}