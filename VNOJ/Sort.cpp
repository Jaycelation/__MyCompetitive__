#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Graph {
	int start, end, weight;
};

bool cmp(Graph a, Graph b) {
	return a.weight < b.weight;
}

int main() {
	vector<Graph> g;
	
	int n = 10;
	int a[15][15];
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> a[i][j];
			if (a[i][j] != 0) {
				g.push_back({i, j, a[i][j]});
			}
		}
	}
	
	sort(g.begin(), g.end(), cmp);
	for (auto x : g) {
		cout << x.start << " " << x.end << " " << x.weight << "\n";
	}

	return (0^_^0);
}

