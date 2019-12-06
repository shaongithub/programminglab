#include<stdio.h>
int main()
{
    int D, Y, M,M1, D1;
    scanf("%d", &D);

    Y=D/365;
    D1=D%365;
    M=D1/30;
    M1=D1%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Y, M, M1);

    return 0;
}
