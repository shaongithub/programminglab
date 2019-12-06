#include<stdio.h>
int main()
{
    int Y;
    printf("Enter a Year:");
    scanf("%d", &Y);

    if(Y%4==0)
        printf("It is Leap Year\n");
    else
        printf("It is Not Leap Year\n");

    return 0;
}
