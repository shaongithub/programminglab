#include<stdio.h>
int main()
{
    int n,y,m,w,d;
    scanf("%d",&n);
    y=n/365;
    n=n%365;
    m=n/30;
    n=n%30;
    w=n/7;
    n=n%7;
    printf("%d year \n %d month \n %d week \n %d day \n",y,m,w,n);
    return 0;

}
