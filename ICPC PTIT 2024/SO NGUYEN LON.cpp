#include <bits/stdc++.h>
using namespace std;

//AC

long long cvLong(string s) {
	long long ans = 0;
	for (int i = 0; i < s.size(); ++i) {
		ans = ans*10 + s[i]-'0';
	}
	return ans;
}

bool isNum(string s) {
	for (auto c : s) {
		if (!isdigit(c))
			return false;
	}
	return true;
}

int main() {
	string line;
	string s;
	vector<string> v;
	long long ans = 0;
	while (getline(cin, line)) {
		s += line + " ";
	}
	stringstream ss(s);
	string token;
	
	while (ss >> token) {
		v.push_back(token);
	}
	for (auto x : v) {
		if (isNum(x) && cvLong(x) >= INT_MAX && cvLong(x) <= LLONG_MAX) {
			ans += cvLong(x);
			//cout << x << " ";
		}
	}
	cout << ans << "\n";
	
	return 0;
}
