#include <iostream>
using namespace std;

string decode(string& s) {
    int cnt = 1;
    int size = s.size();
    string ans = "";
    for (int i = 1; i < size; i++) {
        if (s[i] != s[i - 1]) {
        	ans += to_string(cnt) + s[i-1];
            cnt = 1;
        } else {
            cnt++;
        }
    }
    ans += to_string(cnt) + s[size-1];
    return ans;
}

int main() {
	int n; cin >> n;
	string s; cin >> s;
	
	string ans = decode(s);
	for (int i = 1; i < n; ++i) {
		ans = decode(ans);
	}
	cout << ans << "\n";

	return 0;
}

