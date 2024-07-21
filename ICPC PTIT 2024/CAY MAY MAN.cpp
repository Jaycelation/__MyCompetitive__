#include <bits/stdc++.h>
using namespace std;

//AC

bool isLuck(long long n) {
    while (n != 0) {
        if (n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<long long> node;
    vector<vector<long long>> adj(n + 1);
    vector<long long> vis(n + 1, 0);

    for (int i = 0; i < n - 1; i++) {
        long long u, v, w;
        cin >> u >> v >> w;
        if (isLuck(w)) {
            node.push_back(u);
            node.push_back(v);
        } else {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    vector<long long> size;
    for (auto x : node) {
        if (!vis[x]) {
            vis[x] = 1;
            queue<int> q;
            q.push(x);
            long long cnt = 1;
            while (!q.empty()) {
                int a = q.front();
                q.pop();
                for (auto y : adj[a]) {
                    if (!vis[y]) {
                        vis[y] = 1;
                        q.push(y);
                        cnt++;
                    }
                }
            }
            size.push_back(cnt);
        }
    }
    long long sum = 0;
    
    for (auto x : size) {
        sum += x * (n - x) * (n - x - 1);
    }
    cout << sum << "\n";
    
    return 0;
}
