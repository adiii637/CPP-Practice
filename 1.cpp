#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> b(n);
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Sort the sequence descending
    sort(b.begin(), b.end(), greater<ll>());

    // Base case: Any two numbers x >= y form a valid sequence of length 2
    if (n == 2) {
        cout << b[0] << " " << b[1] << endl;
        return;
    }

    bool ans = true;

    // Validate the entire chain moving forward
    for (int i = 2; i < n; i++) {
        // Prevent division by zero if b[i-1] is 0 (though input says >= 1)
        if (b[i - 1] == 0) {
            ans = false;
            break;
        }
        
        // The current element must match the modulo of the previous two
        if (b[i] != b[i - 2] % b[i - 1]) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << b[0] << " " << b[1] << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}