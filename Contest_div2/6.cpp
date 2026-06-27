#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int64 n, k;
        cin >> n >> k;

        int64 rem = n;
        int64 ans = 0;
        int64 cost = 1;

        while (cost <= rem) {
            int64 take = min(k, rem / cost);
            ans += take;
            rem -= take * cost;

            if (cost > (1LL << 60)) break; // avoid overflow
            cost <<= 1;
        }

        cout << ans << '\n';
    }

    return 0;
}