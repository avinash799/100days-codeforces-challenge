#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
      
        char s[n + 1];  
        cin >> s;       
        
        
        char firstChar = s[0];       
        char lastChar = s[n - 1];
        if(n>=2){
            if(firstChar!=lastChar){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
     
    }

    return 0;
}
