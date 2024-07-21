#include <bits/stdc++.h>
using namespace std;

//AC
void __solve__(int arr[], int n) {
	stack<int> s;

	int left[n + 1];
	int right[n + 1];

	for (int i = 0; i < n; i++) {
		left[i] = -1;
		right[i] = n;
	}

	for (int i = 0; i < n; i++) {
		while (!s.empty() && arr[s.top()] >= arr[i])
			s.pop();

		if (!s.empty())
			left[i] = s.top();

		s.push(i);
	}
	while (!s.empty())
		s.pop();

	for (int i = n - 1; i >= 0; i--) {
		while (!s.empty() && arr[s.top()] >= arr[i])
			s.pop();
		if (!s.empty())
			right[i] = s.top();
		s.push(i);
	}

	int dp[n + 1];
	for (int i = 0; i <= n; i++)
		dp[i] = 0;
		
	for (int i = 0; i < n; i++) {
		int len = right[i] - left[i] - 1;
		dp[len] = max(dp[len], arr[i]);
	}

	for (int i = n - 1; i >= 1; i--)
		dp[i] = max(dp[i], dp[i + 1]);

	for (int i = 1; i <= n; i++)
		cout << dp[i] << " ";
		
	cout << "\n";
}

int main() {
	int n; cin >> n;
	int arr[n+1];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	__solve__(arr, n);
	
	return 0;
}