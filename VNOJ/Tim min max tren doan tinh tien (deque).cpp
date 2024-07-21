#include <bits/stdc++.h>
using namespace std;

const int maxn = 100005;
deque<int> dq;

int main() {
	int n, k; cin >> n >> k;
	int a[maxn], dp[maxn];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
		
	for (int i = 1; i <= n; ++i) {
		while (dq.size() && a[i] <= a[dq.back()]) {
			dq.pop_back();
		}
		dq.push_back(i);
		while (i - dq.front() >= k) {
			dq.pop_front();
		}
		if (i >= k) 
			cout << a[dq.front()] << " ";
	}

	return 0;
}
