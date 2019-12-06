#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c){
        printf("This triangle is Equilateral\n");
    }

    else if(a==b || a==c || c==b)
        printf("This Triangle is Isosceles\n");
    else
        printf("This Triangle is Scalene\n");

    return 0;
}
