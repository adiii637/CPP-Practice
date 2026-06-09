#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;

        for (int i = 1; i <= n; i++)
            ans.push_back(i);

        for (int i = n; i >= 1; i--)
            ans.push_back(i);

        for (int i = 1; i <= n; i++)
            ans.push_back(i);

        for (int i = n; i >= 1; i--)
            ans.push_back(i);

        for (int i = 0; i < (int)ans.size(); i++) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }

    return 0;
}