#include <iostream>

using namespace std;

const int MOD = 998244353;

// Function to calculate (base^exp) % MOD in O(log exp) time
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve() {
    long long n, m, r, c;
    cin >> n >> m >> r >> c;
    
    // Total number of elements in the matrix
    long long total_vars = n * m;
    
    // Total number of r x c submatrices
    long long constraints = (n - r + 1) * (m - c + 1);
    
    // Number of free variables in the system of linear equations
    long long free_vars = total_vars - constraints;
    
    // Using Fermat's Little Theorem: a^(p-1) == 1 (mod p)
    // We can reduce the exponent modulo (MOD - 1)
    free_vars %= (MOD - 1);
    
    cout << power(2, free_vars) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}