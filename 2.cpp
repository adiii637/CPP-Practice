#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
bool isPalindrome(ll n){ 
   string a = to_string(n);
    string b = a;
    reverse(b.begin(), b.end());
    return a == b;
    
}
void solve(){
    ll n;
    cin>>n;
    for(ll i=0;i<=n;i+=12){
        ll a=n-i;
        if(isPalindrome(a)){
            cout<<a<<" "<<i<<endl;
            return;
        }
        if (i > 300000) {
            break;
        }
    }
    cout<< "-1" <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}