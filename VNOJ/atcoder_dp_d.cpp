#include <bits/stdc++.h>
#define maxn 102
#define maxa 100005
using namespace std;

int n, w[maxn], v[maxn], S;
int dp[maxn][maxa];

int main() {
	cin >> n >> S;
	for (int i = 1; i <= n; ++i) {
		cin >> w[i] >> v[i];
	}
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= S; ++j) {
			dp[i][j] = dp[i-1][j];
			if (j >= w[i]) {
				dp[i][j] = max(dp[i-1][j-w[i]]+v[i], dp[i][j]);
			}
		}
	}	
	cout << dp[n][S] << "\n";

	return 0;
}
