#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter Temperature of Celsius: ");
    scanf("%f", &C);
    F=(C*(9.0/5.0))+32;
    printf("Fahrenheit: %0.2f", F);
    return 0;
}
