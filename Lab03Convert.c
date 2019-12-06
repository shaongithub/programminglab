#include<stdio.h>
int main()
{
    float C, M, K;
    printf("Enter length of Centimeter: ");
    scanf("%f", &C);
    M=C/100;
    K=C/100000;
    printf("\nMeter is:%0.2f\n\nKilometer is:%f\n", M,K);
    return 0;
}
