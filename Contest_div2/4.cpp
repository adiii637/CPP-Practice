#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool possible = true;

        for (int start = 0; start < k; start++) {
            int ones = 0;

            for (int i = start; i < n; i += k) {
                if (s[i] == '1') {
                    ones++;
                }
            }

            if (ones % 2 == 1) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}