#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int ans=0,ans2=0,ans3=0,ans4=0;
        ans=a-b;
        ans2=a+b;
        ans3=c-d;
        ans4=c+d;
        int result=n*ans;
        int result2=n*ans2;
        
        if(result2>=ans3&& result<=ans4){
            cout<<"Yes"<<endl;
            
        }
       
        else {
            cout<<"NO"<<endl;
        }
        // else{
        //     cout<<"YES"<<endl;
        // }
    }
    return 0;
    
}