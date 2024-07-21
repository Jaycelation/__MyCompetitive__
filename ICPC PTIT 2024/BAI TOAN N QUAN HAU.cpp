#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
int n, a[MAXN] = {0}, vis[MAXN] = {0}, cnt = 0;

void Try(int t) {
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            vis[i] = 1;
            a[t] = i;
            
            bool check = true;
            for (int j = t - 1; j >= 1; j--) {
                if (t - j == abs(a[t] - a[j])) {
                    check = false;
                    break;
                }
            }
            if (check) {
                if (t == n) {
                    cnt++;
                } else {
                    Try(t + 1);
                }
            }
            vis[i] = 0;
        }
    }
}

int __solve__(int n) {
    cnt = 0;
    Try(1);
    return cnt;
}

int main() {
    int t = 1; 
    while (t--) {
		cin >> n;
        cout << __solve__(n) << "\n";
    }
    return 0;
}
