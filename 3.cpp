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
        ll n;
        cin>>n;  // a and n have same reamainder = n%12=a%12 bcoz n-a=b mod on 12 both side
            ll r=n%12;  // 0,1,2....11
            if(r!=10){ // single digit and 11 is palindrome so r=a n%12=a%12
                ll b=n-r;
                cout<< r << " " <<b<<endl;
            }
            else{
              ll r=22;
              ll b=n-22;
              if(b<0) cout<<-1<<endl;
              else cout<<r <<" "<<b<<endl;
            }
    }

    return 0;
}