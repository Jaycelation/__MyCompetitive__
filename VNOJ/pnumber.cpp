#include <bits/stdc++.h>
#define _ 0
using namespace std;

int prime[200005];

void sang() {
	for (int i = 0; i <= 200005; ++i) {
		prime[i] = 1;
	} 
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(200005); ++i) {
		if (prime[i]) {
			for (int j = i*i; j <= 200005; j += i) {
				prime[j] = 0;
			} 
		}
	}
}

int main() {
	sang();
	int a, b; cin >> a >> b;
	
	for (int i = a; i <= b; ++i) {
		if (prime[i]) {
			cout << i << "\n";
		}
	}

	return (0^_^0);
}

