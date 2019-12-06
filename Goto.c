#include<stdio.h>
int main()
{

    goto a;
    printf("abc");
    printf("xyz");
    a:
        printf("123");

    return 0;
}
