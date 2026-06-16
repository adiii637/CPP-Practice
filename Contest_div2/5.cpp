#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll division_used=0;
        ll a,b,x;
        cin>>a>>b>>x;
         if(x==1){
            cout<<abs(a-b)<<endl;
            continue;
        }
        if(a>b)swap(a,b);
        ll curr=b;
        ll ans = LLONG_MAX;
        while(curr>0){
            ans=min(ans,division_used+abs(curr-a));
            curr=curr/x;
            division_used++;
        }
        cout<<ans<<endl;
    }

    return 0;
}


// For every level:

// cost_so_far = number of divisions used

// Current value:

// cur = b

// If we stop here:

// answer =
// cost_so_far + |cur-a|

// Take minimum over all levels.


long long solve(long long a, long long b, long long x) {

    if (a > b)
        swap(a, b);

    if (a == b)
        return 0;

    if (x == 1)
        return b - a;

    return min(
        b - a,
        1 + solve(a, b / x, x)
    );
}