#include <bits/stdc++.h>
#define _ 0
using namespace std;

struct Node {
	Node* left; Node* right;
	int data;
	Node (int data) {
		this->left = this->right = NULL;
		this->data = data;
	}
};

Node* insert(Node* root, int data) {
	if (root == NULL) {
		return new Node(data);
	}
	if (data < root->data) {
		root->left = insert(root->left, data);
	}
	else {
		root->right = insert(root->right, data);
	}
	return root;
}

Node* find(Node* root, int a, int b) {
	if (root == NULL) return NULL;
	if (root->data > a && root->data > b) {
		return find(root->left, a, b);
	}
	if (root->data < a && root->data < b) {
        return find(root->right, a, b);
    }
    return root;
}

bool Path(Node* root, int x, vector<int>& v) {
	if (root == NULL) return false;
	v.push_back(root->data);
	if (root->data == x) return true;
	if ((root->left && Path(root->left, x, v)) || (root->right && Path(root->right, x, v))) {
		return true;
	}
	v.pop_back();
	return false;
}

vector<int> Per(Node* root, int a, int b) {
	vector<int> pathA, pathB, path;
	Node* tmp = find(root, a, b);
	Path(tmp, a, pathA);
	Path(tmp, b, pathB);
	
	for (int i = pathA.size()-1; i >= 0; i--) {
		path.push_back(pathA[i]);
	}
	
	for (int i = 1; i < pathB.size(); ++i) {
		path.push_back(pathB[i]);
	}
	return path;
}

int main() {
	int n; cin >> n;
	
	int a[n+5];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int x, y; cin >> x >> y;
	Node* root = new Node(a[0]);
	for (int i = 1; i < n; ++i) {
		insert(root, a[i]);
	}	
	vector<int> path = Per(root, x, y);
	
//	for (auto x : path) {
//		cout << x << " ";
//	}
	
	sort(path.begin(), path.end());
	cout << path[0] << " " << path[path.size()-1] << "\n";
	
	return (0^_^0);
}

