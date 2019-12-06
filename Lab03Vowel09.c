#include<stdio.h>
int main()
{
    char A;
    scanf("%c", &A);

    if(A=='A'||A=='E'||A=='I'||A=='O'||A=='U'||A=='a'||A=='e'||A=='i'||A=='o'||A=='u')
        printf("It is Vowel");
    else
        printf("It is Consonant");

    return 0;
}
