#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>=97 && a<=122 || (a>= 65 && a<=90))
        printf("Alphabet");
    else if(a>=48 && a<=57)
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}
