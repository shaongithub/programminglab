#include<stdio.h>
int main()
{
    int x=5,y=8,z;
    //scanf("%d %d", &x, &y);

    z=(x>y)? x+2 : x+3;
    printf("%d", z);

    return 0;
}
