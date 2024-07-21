#include <bits/stdc++.h>
using namespace std;

string __solve__(string s, int n) {
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        a--;
        mp[a]++;
    }
    
    vector<int> v;
    for (const auto& i : mp) {
        if (i.second % 2 == 1) {
            v.push_back(i.first);
        }
    }
    
    if (v.size() % 2 == 1) {
        int mid = v.back();
        for (int i = mid; i < s.size() / 2; i++) {
            swap(s[i], s[s.size() - 1 - i]);
        }
    }
    
    for (int i = v.size() - 2; i >= 0; i--) {
        if (i % 2 == 0) {
            for (int j = v[i]; j < v[i + 1]; j++) {
                swap(s[j], s[s.size() - 1 - j]);
            }
        }
    }
    
    return s;
}

int main() {
    int t = 1;
    while (t--) {
    	string s; cin >> s;
	    int n; cin >> n;
        cout << __solve__(s, n);
    }
    return 0;
}
