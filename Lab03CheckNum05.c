#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if(N<1&&N!=0)
        printf("Number is Negative\n");
    else if(N==0)
        printf("Number is Zero\n");
    else
        printf("Number is Positive\n");

    return 0;
}
