#include<stdio.h>
int main()

{
    double A, B, C, C1, T, T1,S,R, pi=3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    T=(1/2.0)*A*C;
    C1=pi*(C*C);
    T1=(1/2.0)*(A+B)*C;
    S=B*B;
    R=A*B;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", T, C1, T1, S, R);

    return 0;

}
