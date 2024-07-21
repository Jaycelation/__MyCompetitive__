#include <bits/stdc++.h>
using namespace std;

int minDis(vector<int> v) {
    unordered_map<int, int> mp;
    int res = INT_MAX;

    for (int i = 0; i < v.size(); ++i) {
        int val = v[i];
        if (mp.find(val) != mp.end()) {
            int dis = i - mp[val];
            if (dis < res) {
                res = dis;
            }
        }
        mp[val] = i;
    }

    return (res == INT_MAX) ? -1 : res;
}

int main() {
	int n; cin >> n;
	vector<int> v(n+1);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	
	int result = minDis(v);
	cout << result << "\n";
	
	return 0;
}
