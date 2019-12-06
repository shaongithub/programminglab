#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d %d %d", &X, &Y, &Z);

    if(X>Y&&X>Z)
        printf("Maximum Number is: %d\n", X);
    else if(Y>X&&Y>Z)
        printf("Maximum Number is: %d\n", Y);
    else
        printf("Maximum Number is: %d\n", Z);

    return 0;
}
