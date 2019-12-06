#include<stdio.h>
int main()
{
    char V;
    scanf("%c", &V);

    if(V>=65 && V<=90 || V>=97 && V<=122)
        printf("Alphabet");
    else if(V>=48 && V<=57)
        printf("Digit");
    else
        printf("Special Character");

    return 0;

}
