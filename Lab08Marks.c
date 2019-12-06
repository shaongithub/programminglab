#include<stdio.h>
int main()
{
    int a,b,c,d,e,T,A;


    printf("Enter Five Subjects Marks: ");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    T=a+b+c+d+e;
    A=T/5;

    printf("\nTotal is:%d\n\nAverage:%d", T, A);
    return 0;
}
