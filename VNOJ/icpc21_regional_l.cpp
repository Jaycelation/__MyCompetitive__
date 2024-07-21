#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		
		stack<char> st;
		while (n > 1) {
			if (n%2 == 0) {
				st.push('L');
			}
			else {
				st.push('R');
			}
			n /= 2;
		}
		
		while (!st.empty()) {
			cout << st.top(); st.pop();
		}
		cout << "\n";
	}

	return 0;
}
