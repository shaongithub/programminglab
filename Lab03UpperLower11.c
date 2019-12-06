#include<stdio.h>
int main()
{
    char A;

    scanf("%c", &A);
    if(A>=65 && A<=90)
        printf("Upper Case\n");
    else if(A>=97 && A<=122)
        printf("Lower Case\n");

        return 0;

}

