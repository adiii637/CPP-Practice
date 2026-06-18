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
        vector<int>A(n);
        for(ll i=0;i<n;i++){
            cin>>A[i];
        }
        for(ll i=0;i<n-1;i++){
            if(A[i]<A[i+1]){
                A[i+1]=A[i];
            }
           
        }
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=A[i];
        }
        cout<<sum<<endl;
    }
    

    return 0;
}