#include<stdio.h>
int main()
{
    int a[1000];
    int i,j,n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(j=n-1; j<=i; j--){
        printf("%d ", a[j]);
    }
    return 0;

}
