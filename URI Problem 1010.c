#include<stdio.h>
int main()
{
    int N, Q, N1, Q1;
    float R,R1, P;
    scanf("%d %d %f %d %d %f", &N, &Q, &R, &N1, &Q1, &R1);

    P=((Q*R)+(Q1*R1));

    printf("VALOR A PAGAR: R$ %0.2f\n", P);

    return 0;
}
