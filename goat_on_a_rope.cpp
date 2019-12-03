#include <cstdio>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int x, y, x1, y1, x2, y2;
    scanf("%d %d %d %d %d %d", &x,&y,&x1,&y1,&x2,&y2);
    float answer = sqrt(float(pow(max(max(x1-x, x-x2), 0),2) + pow(max(max(y1-y, y-y2), 0),2)));
    printf("%.3f", answer);
}