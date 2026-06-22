#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (auto &x : a)
            cin >> x;

        for (auto &x : b)
            cin >> x;

        vector<bool> used(n, false);
        vector<int> pos;

        bool possible = true;

        // Match every a[i]
        for (int i = 0; i < n; i++) {

            int chosen = -1;

            for (int j = 0; j < n; j++) {

                if (!used[j] && a[i] <= b[j]) {
                    chosen = j;
                    break;
                }
            }

            if (chosen == -1) {
                possible = false;
                break;
            }

            used[chosen] = true;
            pos.push_back(chosen);
        }

        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        // Count inversions
        ll swaps = 0;

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                if (pos[i] > pos[j])
                    swaps++;
            }
        }

        cout << swaps << '\n';
    }

    return 0;
}