#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
           cin>>v[i];
        }
       
            int max_val = *max_element(v.begin(), v.end());
            
            int size=v.size();
            if(size==1){
                cout<<max_val<<endl;
            }
            
            
            sort(v.begin(),v.end());
            int max=v.size()/2; 
            if(size%2==0){
                cout<<v[max]<<endl;
            }
            int min=v.size()/2;
            if(size%2!=0){
                cout<<v[min]<<endl;
            }
        
    }
    return 0;
    
}