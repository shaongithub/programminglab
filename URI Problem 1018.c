#include<stdio.h>
int main()
{
    int M, a, b, c, d,e,f,g,h,i,j,k,l,m;
    scanf("%d", &M);

    if(0<M<1000000)
    {
        a=M/100;
        b=M%100;
        c=b/50;
        d=b%50;
        e=d/20;
        f=d%20;
        g=f/10;
        h=f%10;
        i=h/5;
        j=h%5;
        k=j/2;
        l=j%2;
        m=l/1;
    }
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", M, a, c,e,g,i,k,m);

    return 0;
}
