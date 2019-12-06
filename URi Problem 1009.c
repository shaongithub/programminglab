#include<stdio.h>
int main()
{
    char name[25];
    double S, S2, SB;
    scanf("%s %lf %lf", name, &S, &S2);

    SB=S+((S2/100)*15);

    printf("TOTAL = R$ %0.2lf\n", SB);

    return 0;
}
