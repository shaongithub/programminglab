#include<stdio.h>
int main()
{
    float R, pi=3.1416, A, C;
    printf("Enter Circle's Radius: ");
    scanf("%f",&R);
    A=pi*(R*R);
    C=2*pi*R;
    printf("Area:%0.2f\nCircumference:%0.2f",A,C);
    return 0;
}
