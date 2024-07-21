#include <bits/stdc++.h>
using namespace std;

long long min_energy(vector<int>& h, int c) {
	
}

int main() {
	int n, c;
    cin >> n >> c;
    vector<int> h(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    
    cout << min_energy(h, c) << "\n";

	return 0;
}

