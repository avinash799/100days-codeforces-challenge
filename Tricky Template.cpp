//15th day of 100 days codeforces challenge

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
          int ans=0;
       
 	for(int i=0;i<n;i++)
        { 
   	 if(a[i]!=c[i] and b[i]!=c[i])
   	    {
   	 	ans=1;
   	 	break;
		}
	   }
	   if(ans==1)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
    }
    return 0;
    
}
