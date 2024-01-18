//10 day of 100 days codeforces challenge

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    sort(array,array+n);
    int c1=array[n-1]-array[1];
    int c2=array[n-2]-array[0];
    cout<<min(c1,c2)<<endl;
    return 0;
    
}

