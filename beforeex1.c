#include<stdio.h>
int main()
{
    char n;

    scanf("%c", &n);
    if(n>=65 && n<=90 || n>=97 && n<=122)
    {
        if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U' || n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else if(n>=48 && n<=57)
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}
