#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Create an extended array of size 3n to elegantly handle circular sliding windows
    // (We'll evaluate the original array situated perfectly in the middle)
    vector<long long> ext_a(3 * n);
    for (int i = 0; i < 3 * n; i++) {
        ext_a[i] = a[i % n];
    }
    
    // Build prefix sums for O(1) range queries
    vector<long long> pref(3 * n + 1, 0);
    for (int i = 0; i < 3 * n; i++) {
        pref[i + 1] = pref[i] + ext_a[i];
    }
    
    long long max_total_happiness = 0;
    
    // Evaluate C_i for each person. The original n people span from index n to 2n - 1.
    for (int i = n; i < 2 * n; i++) {
        // Window from [i - d] to [i + d] inclusive
        long long window_sum = pref[i + d + 1] - pref[i - d];
        
        // C_i = 2d * a_i - (window_sum - a_i) => (2d + 1) * a_i - window_sum
        long long C_i = (2LL * d + 1) * ext_a[i] - window_sum;
        
        // If the independent contribution is positive, choosing to give a gift increases total happiness
        if (C_i > 0) {
            max_total_happiness += C_i;
        }
    }
    
    cout << max_total_happiness << "\n";
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