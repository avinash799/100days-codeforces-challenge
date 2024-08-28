#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size=s.size();

    int a = 0, otherchar = 0;
    
    for (char c : s) { 
        if (c == 'a') {
            a++;
        } else {
            otherchar++;
        }
    }
    
    if (a > otherchar) {
        cout << s.size() << endl;
    } else {
        int cnt=size-otherchar;
        int cnt3=cnt+a;
        
        cout << abs(cnt3-1) << endl;
    }
    
    return 0;
}
