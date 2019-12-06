#include<stdio.h>
int main()
{
    int a[100], t=0, i,m,n;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for(i=1; i<=n; i++)
        if(m==a[i])
        t++;
    if(t==0)
        printf("Not Found\n");
    else
        printf("Found\n");

    return 0;
}
