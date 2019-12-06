#include<stdio.h>
int main()
{
    int N,H;
    float R, S;
    scanf("%d %d %f", &N, &H, &R);

    S=H*R;

    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", N, S);

    return 0;
}
