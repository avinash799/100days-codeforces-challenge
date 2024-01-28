//19th day of 100 days codeforces challenge
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1, cube=0;
    while(1){
        cube+=(i*(i+1)/2);
        if(cube+((i+1)*(i+2))/2>n||cube==n)break;
        i++;
    }
    cout<<i<<endl;
    return 0;
    
}
