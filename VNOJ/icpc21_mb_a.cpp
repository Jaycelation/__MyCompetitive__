#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	bool check = true;
	int cnt = 0;
	for (int i = 0; i < s.size()-3; ++i) {
		if (!isalpha(s[0])) {
			check = false;
			break;
		}
		if (s[i] == '.') {
			++cnt;
			string w = string(1,s[i+1]) + string(1,s[i+2]);
			if (w != "py") {
				check = false;
			}
			else {
				check = true;
			}
			break;
		}
		if (cnt > 1) {
			check = false;
			break;
		}
	}
	
	if (!check)
		cout << "no\n";
	else cout << "yes\n";
	
	return 0;
}
