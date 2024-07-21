#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	while (T--) {
		string name, first, last;
		cin >> name >> first >> last;
		
		string check = last + first;
		if (check == name) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		
	}

	return 0;
}

