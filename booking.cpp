#include <cstdio>
#include <queue>
#include <utility> 
//typedef vector<int> vi;
using namespace std;
typedef pair<int, int> pi;

int dtoi(int y, int m, int d, int h, int mn){
    int tot_mns = (y-2013) * 365 * 24 * 60;
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(y == 2016) months[2]+=1;
    for(int i=1; i<13; i++) months[i]+=months[i-1];
    d += months[m-1];
    return tot_mns + d*24*60 + h*60 + mn;
}

int main(){
    int TC,B,C;
    scanf("%d", &TC);
    while(TC){
        TC--;
        scanf("%d %d",&B, &C);
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        for(int i = 0; i<B; i++){
            char c[20];
            int y1, m1, d1, h1, mn1, y2, m2, d2, h2, mn2;
            scanf("%s %d-%d-%d %d:%d %d-%d-%d %d:%d",c, &y1, &m1, &d1, &h1, &mn1, &y2, &m2, &d2, &h2, &mn2);
            pq.push(make_pair(dtoi(y1, m1, d1, h1, mn1), 1));
            pq.push(make_pair(dtoi(y2, m2, d2, h2, mn2)+C, -1));
        }
        int ans = 0, value = 0;
        while(!pq.empty()){
            pi curr = pq.top();
            value += curr.second;
            ans = max(ans, value);
            pq.pop();
        }
        printf("%d\n",ans);

    }
}
