#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
	  while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> substrings;

        for (int i = 0; i < s.length() - 1; ++i) {
            substrings.insert(s.substr(i, 2));
        }
        
        cout << substrings.size() << endl;



	}
	return 0;

}