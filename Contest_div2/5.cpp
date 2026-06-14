#include <bits/stdc++.h>
using namespace std;

using ll = long long;

map<pair<ll,ll>, ll> dp;
ll x;

ll solve(ll a, ll b) {
    if (a == b) return 0;

    if (a < b) swap(a, b);

    pair<ll,ll> state = {a, b};

    if (dp.count(state)) return dp[state];

    ll ans = a - b; // increment smaller until equal

    ans = min(ans, 1 + solve(a / x, b)); // divide larger

    return dp[state] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b >> x;

        dp.clear();

        cout << solve(a, b) << '\n';
    }

    return 0;
}