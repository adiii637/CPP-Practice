#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    long long X = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        X ^= a[i];
    }
    
    // If there is only 1 element, it's already a P-position.
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    
    // If XOR sum is 0, the only winning move is to take everything (b = a).
    if (X == 0) {
        cout << 1 << "\n";
        return;
    }
    
    // If XOR sum is not 0, count how many piles can be reduced to X ^ a[i]
    // to leave exactly one non-zero element for the opponent.
    long long winning_moves = 0;
    for (int i = 0; i < n; i++) {
        if ((X ^ a[i]) < a[i]) {
            winning_moves++;
        }
    }
    
    cout << winning_moves % MOD << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}