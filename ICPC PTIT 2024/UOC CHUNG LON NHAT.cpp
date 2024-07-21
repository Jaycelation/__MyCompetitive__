#include <bits/stdc++.h>
using namespace std;

//AC

int __gcd__(int a[], int n) {
	int h = 0;
	for (int i = 0; i < n; ++i) {
		h = max(h, a[i]);
	}
	int dp[h+1] = {0};
	
	for (int i = 0; i < n; ++i) {
		dp[a[i]]++;
	}
	
	int cnt = 0;
	for (int i = h; i >= 1; i--) {
		int j = i;
		cnt = 0;
		
		while (j <= h) {
			if (dp[j] >= 2)
				return j;
			else if (dp[j] == 1)
				cnt++;
			j += i;
			if (cnt == 2) 
				return i;
		}
		
	}
	
}

int main() {
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	int a[n+1];
    	for (int i = 0; i < n; ++i) {
    		cin >> a[i];
		}
    	
		cout << __gcd__(a, n) << "\n";
    }
    
    
    return 0;
}
