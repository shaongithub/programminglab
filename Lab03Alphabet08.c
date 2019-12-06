#include<stdio.h>
int main()
{
    char A;

    scanf("%c", &A);
    if(A>=65 && A<=90 || A>=97 && A<=122)
        printf("Alphabet\n");
    else
        printf("Not Alphabet\n");

    return 0;

}
