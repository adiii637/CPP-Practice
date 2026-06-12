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
        ll n;
        cin>>n;
       vector<ll> A(n);
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        ll maxi = LLONG_MIN;
        ll mini = LLONG_MAX;
        for(ll i=0;i<n;i++){
            maxi=max(A[i],maxi);
            mini=min(A[i],mini);
        }
        ll ans=(maxi+1)-mini;
        cout<<ans<<endl;
    }

    return 0;
}