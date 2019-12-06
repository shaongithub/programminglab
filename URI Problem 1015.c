#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,D,L,P1,P2;

    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    P1=C-A;
    P2=D-B;
    L=sqrt((P1*P1)+(P2*P2));

    printf("%0.4lf\n", L);
    return 0;
}
