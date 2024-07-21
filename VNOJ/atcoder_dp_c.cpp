#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n][3] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}

	int dp[n][3] = {0};

	for (int i = 0; i < n; ++i) {
		dp[0][i] = a[0][i];
	}
	
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < 3; ++j) {
			dp[i][j] = max(dp[i-1][(j+1)%3], dp[i-1][(j+2)%3]) + a[i][j];
		}	
	}
	
	int result = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
	cout << result << "\n";

	return 0;
}
