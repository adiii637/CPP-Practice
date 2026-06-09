#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,x,y,z;
        cin>>n;
        cin>>x;
        cin>>y;
        cin>>z;
        
       ll NoAi = (n + (x+y) - 1) / (x+y);

        ll WithAI=0;
        if(x*z>=n){
           WithAI = (n + x - 1) / x;
        }
        else{
            ll rem=n-z*x;
           ll speed = x + 10*y;
            WithAI = z + (rem + speed - 1) / speed;        
        }
        cout<<min(WithAI,NoAi)<<endl;
            
        
    }
    

    return 0;
}