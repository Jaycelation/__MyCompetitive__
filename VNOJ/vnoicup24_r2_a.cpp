#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long n, x; cin >> n >> x;
		long long a[5005];
		int result = 0;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		sort(a+1, a+n+1);
		
		for (int i = 1; i <= n; ++i) {
			if (x >= a[i]) {
				++result;
				x = x / i*(i+1);
			}
			else break;
		}
		cout << result << "\n";	
	}

	return 0;
}
