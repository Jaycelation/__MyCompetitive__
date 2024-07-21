#include <bits/stdc++.h>
#define _ 0
#define INT_SIZE 32
using namespace std;

struct Node {
	int value;
	Node* arr[2];
};

Node* create() {
	Node* temp = new Node;
	temp->value = 0;
	temp->arr[0] = temp->arr[1] = NULL;
	return temp;
}

void build(Node* root, int pre_XOR) {
	Node* temp = root;
	for (int i = INT_SIZE-1; i >= 0; i--) {
		bool val = pre_XOR & (1<<i);
		if (temp->arr[val] == NULL) {
			temp->arr[val] = create();
		}
		temp = temp->arr[val];
	}
	temp->value = pre_XOR;
}

int query(Node* root, int pre_XOR) {
	Node* temp = root;
	for (int i = INT_SIZE-1; i >= 0; i--) {
		bool val = pre_XOR & (1<<i);
		if (temp->arr[1-val] != NULL) {
			temp = temp->arr[1-val];
		}
		else if (temp->arr[val] != NULL) {
			temp = temp->arr[val];
		}
	}
	return pre_XOR^(temp->value);
}

int maxSubarrayXOR(int arr[], int n) {
	Node* root = create();
	build(root, 0);
	int result = INT_MIN, pre_XOR = 0;
	
	for (int i = 0; i < n; ++i) {
		pre_XOR ^= arr[i];
		build(root, pre_XOR);
		result = max(result, query(root, pre_XOR));
	}
	return result;
}

int main() {
	int n; cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	cout << maxSubarrayXOR(arr, n);

	return (0^_^0);
}
