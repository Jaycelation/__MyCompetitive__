#include <bits/stdc++.h>
using namespace std;

int n, m, a[105][105];
int dp[105][105];
int res = 0;
const int INF = 1000000000;

int F(int j, int i) {
    return (j >= 0 && j < m && i >= 0 && i < n) ? dp[j][i] : -INF;
}

int main() {
	cin >> m >> n;
	memset(dp, 0, sizeof dp);
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
		}
	}
	
   	for(int i = 0; i < m; ++i) {
        dp[i][0] = a[i][0];
    }
	
	for (int j = 1; j < n; ++j) {
		for (int i = 0; i < m; ++i) {
			dp[i][j] = a[i][j] + max({F(i-1, j-1), F(i+1, j-1), F(i, j-1)});
		}
	}

	int result = INT_MIN;
	for (int i = 0; i < m; ++i) {
		result = max(result, dp[i][n-1]);
	}
	cout << result << "\n";

	return 0;
}
