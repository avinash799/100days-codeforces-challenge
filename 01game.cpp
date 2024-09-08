#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int cnt1 = 0, cnt0 = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '0') {
                cnt0++;
            } else {
                cnt1++;
            }
        }
        int size=s.size();
      
        int minCount = min(cnt0, cnt1);
        if (minCount % 2 == 1) {
            cout << "DA" << endl; 
        } else {
            cout << "NET" << endl; 
        }
        
    }

    return 0;
}
