#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a<b+c && b<a+c && c<b+a)
        printf("Triangle is Valid\n");
    else
        printf("Triangle is not Valid\n");
    return 0;
}
