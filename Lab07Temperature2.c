#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter Temperature of Fahrenheit: ");
    scanf("%f", &F);
    C=(F-32)*(5.0/9.0);
    printf("Fahrenheit: %0.2f", C);
    return 0;
}
