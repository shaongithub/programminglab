#include<stdio.h>
int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    if((A>B)&&(A>C))
    {
    printf("%d eh o maior\n",A);
    }
    else if((B>C)&&(B>A))
    {
        printf("%d eh o maior\n",B);
    }
    else
        printf("%d eh o maior\n",C);

    return 0;
}
