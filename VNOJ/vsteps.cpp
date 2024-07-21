#include <bits/stdc++.h>
using namespace std;

const int MOD = 14062008;
int n, k, a[100005], dp[100005];
bool check = true;

int main() {
	cin >> n >> k;
	memset(a, 0, sizeof a);
	memset(a, 0, sizeof dp);
	for (int i = 0; i < k; ++i) {
		int x; cin >> x;
		a[x] = 1;
		if (i != 0) {
			if (a[x-1] == a[x]) {
				check = false;
			}
		}
	}
	if (!check) {
		cout << 0 << "\n";
	}
	else {
		dp[1] = 1;
		
		for (int i = 2; i <= n; ++i) {
			if (!a[i]) {
				dp[i] = (dp[i-1]%MOD + dp[i-2]%MOD)%MOD;
			}
		}
		cout << dp[n] << "\n";
	}

	return 0;
}
