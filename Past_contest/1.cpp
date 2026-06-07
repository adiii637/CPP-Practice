#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
void solve(){
    
    ll n;
    vector<ll> A(n);
    cin>>n;
    for(ll i;i<n;i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    int mid_P=A[n/2];
    ll left=0;
    ll right=0;
    for(ll i;i<n;i++){
        if(A[i]<mid_P) left++;
        else right++;
    }
    cout<<max(left,right)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}