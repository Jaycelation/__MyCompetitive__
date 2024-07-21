#include <bits/stdc++.h>
#define _ 0
using namespace std;

int main() {
	ifstream input("NHAY.INP");
	ofstream output("NHAY.OUT");
	int T; 
	input >> T;
	while (T--) {
		int x1, v1, x2, v2;
		input >> x1 >> v1 >> x2 >> v2;;
		if (x1 == x2) {
			output << 0;
		}
		else {
			if ((x2-x1) % (v1-v2) == 0) {
				output << (x2-x1) / (v1-v2);
			}
			else {
				output << -1;
			}
		}
		output << "\n";
	}

	return (0^_^0);
}
