#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> array(n);
        
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        
        unordered_map<int, int> freqMap;
        //for counting occurence of particular element 
        for (int num : array) {
            freqMap[num]++;
        }
    
        int maxElement = array[0];
        int maxCount = freqMap[maxElement];

      
        for (auto& x : freqMap) {
            if (x.second > maxCount) {
                maxCount = x.second;
            }
        }
        cout <<  abs(maxCount-n )<< endl;
    }
    return 0;
}
