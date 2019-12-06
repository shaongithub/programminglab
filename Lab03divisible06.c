#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if(N%5==0 && N%11==0)
        printf("Number is Divisible By 5 and 11\n");
    else
        printf("Number is Not Divisible By 5 and 11\n");

    return 0;
}
