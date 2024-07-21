#include <iostream>
#include <bitset>
using namespace std;

const int MAX_M = 1000000;  // Gi? s? giá tr? t?i da c?a m là 1 tri?u

int main() {
    int T; 
    cin >> T;
    while (T--) {
        long long n, m;
        cin >> n >> m;
        
        bitset<MAX_M + 2> seen;
        
        for (int i = 0; i <= m; ++i) {
            long long result = n ^ i;
            if (result <= MAX_M + 1) {
                seen[result] = true;
            }
        }

        long long mis = 0;
        while (seen[mis]) {
            ++mis;
        }
        
        cout << mis << "\n";
    }

    return 0;
}

