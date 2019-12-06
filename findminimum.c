#include<stdio.h>
int main()
{
    int a[100],i,n,min;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    min=a[1];
    for(i=2; i<n; i++)
        if(a[i]<=min)
        min=a[i];
    printf("%d", min);
    return 0;
}
