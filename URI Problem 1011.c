#include<stdio.h>
int main()
{
    int R;
    double pi=3.14159, V;
    scanf("%d", &R);
    V=((4/3.0)*pi*R*R*R);

    printf("VOLUME = %0.3lf\n", V);

    return 0;
}
