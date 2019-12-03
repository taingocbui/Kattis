#include <cstdio>
#include <math.h>
int main(){
    double A1, P1, R1, P2;
    scanf("%lf %lf %lf %lf", &A1, &P1, &R1, &P2);


    if ((A1/P1) > (M_PI*R1*R1/P2))
        printf("Slice of pizza\n");
    else printf("Whole pizza\n");
}