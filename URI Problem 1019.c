#include<stdio.h>
int main()
{
    int S, H,H1, M, S1;
    scanf("%d", &S);

    H=S/3600;
    H1=S%3600;
    M=H1/60;
    S1=H1%60;

    printf("%d:%d:%d\n", H, M, S1);

    return 0;
}
