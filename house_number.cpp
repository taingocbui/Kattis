#include <iostream>
typedef long long ll;
using namespace std;
int main(){
    ll m;
    cin>>m;
    ll N = m, sumleft = m, total = m;
    for(ll x = m+1; ; x++){
        ll goal = 2*sumleft + x; //for sumleft = sumright, total = sumleft*2 + x 
        while(total < goal){
            N++;
            total += N;
        }
        if(total == goal){
            cout<<m<<" "<<x<<" "<<N<<endl;
            break;
        }
        sumleft += x;
    }

}