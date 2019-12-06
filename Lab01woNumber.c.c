#include<stdio.h>
int main()
{
    int a=10,b=6,A,M,Mult, Divi, Modu;

    A=a+b;
    M=a-b;
    Mult=a*b;
    Divi=a/b;
    Modu=a%b;
    printf("Add:%d\nMinus:%d\nMultiply:%d\nDivision:%d\nModulus:%d", A,M,Mult,Divi,Modu);
    return 0;
}
