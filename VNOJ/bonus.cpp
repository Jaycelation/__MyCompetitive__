#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Sum(const vector<vector<int>>& a, int n, int k) {
    vector<vector<int>> pre(n + 1, vector<int>(n + 1, 0));
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            pre[i][j] = a[i-1][j-1] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }

    vector<vector<int>> dp(n-k+1, vector<int>(n-k+1));

    for (int i = 0; i <= n-k; ++i) {
        for (int j = 0; j <= n-k; ++j) {
            int total = pre[i+k][j+k] - pre[i+k][j] - pre[i][j+k] + pre[i][j];
            dp[i][j] = total;
        }
    }
    
    return dp;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    
    vector<vector<int>> result = Sum(a, n, k);
    int answer = 0;
    for (int i = 0; i < result.size(); ++i) {
    	for (int j = 0; j < result[i].size(); ++j) {
    		answer = max(answer, result[i][j]);
		}
	}
	cout << answer << "\n";
    
    return 0;
}
