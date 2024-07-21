#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0, m;
vector<int> adj[101];
bool vis[101];

void input() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(vis, false, sizeof vis);
	cnt = 0;	
}

void Bfs(int u) {
	int res = 0;
	vis[u] = true;
	queue<int> q;
	q.push(u);	
	while (!q.empty()) {
		int v = q.front(); q.pop(); ++res;
		vis[v] = true;
		for (int i : adj[v]) {
			if (!vis[i]) {
				vis[i] = true;
				q.push(i);
			}
		}
	}
	cnt = max(cnt, res);
}

void connect() {
	for (int i = 1; i <= 100; ++i) {
		Bfs(i);
	}
}

int main() {
	input();
	connect();
	cout << cnt << "\n";
	return 0;
}
