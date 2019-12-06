#include<stdio.h>
int main()
{
    int x=4,y=5,a,b;
    //scanf("%d %d", &x, &y);
    x=x++;
    y=++y;

    printf("%d %d\n", x,y);
    return 0;
}
