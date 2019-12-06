#include<stdio.h>
int main()
{
    int N;
    printf("Enter Your Month Number:");

    scanf("%d",&N);
    if(N<=12){
    if(N==2)
        printf("This Month Days are: 28\n");
    else if(N==4||N==6||N==9||N==11)
        printf("This Month Days are: 30\n");
    else
        printf("This Month Days are: 31\n");
    }
    return 0;
}
