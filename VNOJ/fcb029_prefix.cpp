#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b; cin >> a >> b;
	int i = a.size(), j = b.size();
	
	if (i > j) {
		cout << "No\n";
	}
	else {
		string tmp = "";
		for (int index = 0; index < i; ++index) {
			tmp += a[index];
		}	
		if (tmp == b) {
			cout << "Yes\n";
		}
		else 
			cout << "No\n";
	}

	return 0;
}

