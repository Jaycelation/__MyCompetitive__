#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		long long a, b, c;
		cin >> a >> b >> c;
		
		if (c == 0) {
			cout << "NO CURVE\n";
		}
		else if (c > 0){
			cout << "CURVE UP\n";
		}
		else {
			cout << "CURVE DOWN\n";
		}	
	}

	return 0;
}

