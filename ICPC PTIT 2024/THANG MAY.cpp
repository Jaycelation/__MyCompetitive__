#include <bits/stdc++.h>
using namespace std;

//AC

int goUpxDown(int N, int ST, int EN, int u, int d) {
    vector<int> dp(N + 1, INT_MAX);
    dp[ST] = 0;
    
    queue<int> q;
    q.push(ST);
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        if (cur + u <= N && dp[cur + u] > dp[cur] + 1) {
            dp[cur + u] = dp[cur] + 1;
            q.push(cur + u);
        }
        
        if (cur - d >= 1 && dp[cur - d] > dp[cur] + 1) {
            dp[cur - d] = dp[cur] + 1;
            q.push(cur - d);
        }
    }
    
    return dp[EN] == INT_MAX ? -1 : dp[EN];
}

int main() {
	int N, ST, EN, u, d;
	cin >> N >> ST >> EN >> u >> d;
	
    cout << goUpxDown(N, ST, EN, u, d) << "\n";

	return 0;
}
