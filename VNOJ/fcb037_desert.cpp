#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, c; cin >> n >> c;
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x; sum += x;
	}
	
	if (sum >= c) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}

