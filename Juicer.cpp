#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  
    
    vector<int> array(n);  
    int b, d;
    cin >> b >> d; 
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];  
    }
    
    int cnt = 0;  
    int prefixSum = 0; 

    for (int i = 0; i < n; i++) {
        if (array[i] <= b) {
            prefixSum +=array[i];
           
        }
        if(prefixSum>d){
            cnt++;
            prefixSum=0;
        }
    }
    
    cout << cnt << endl;  
    
    return 0;
}
