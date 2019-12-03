#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll k,n, same = 0;
    string a, b;
    cin>>k>>a>>b;
    n = a.length();
    for(int i=0; i<a.length(); i++){
        if(a[i] == b[i])
            same+=1;
    }
    ll ans = min(same, k) + min((n - same),(n-k));
    cout<<ans<<"\n";
}