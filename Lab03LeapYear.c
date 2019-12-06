#include<stdio.h>
int main()
{
    int Y;
    printf("Enter a Year:");
    scanf("%d", &Y);

    if(Y%4==0 && (Y%100!=0 || Y%400==0))
        printf("It is Leap Year\n");
    else
        printf("It is Not Leap Year\n");

    return 0;
}
/*In the Gregorian calendar three criteria must be taken into account to identify leap years:

The year can be evenly divided by 4;
If the year can be evenly divided by 100, it is NOT a leap year, unless;
The year is also evenly divisible by 400. Then it is a leap year.
This means that in the Gregorian calendar, the years 2000 and 2400 are leap years, while 1800, 1900, 2100, 2200, 2300 and 2500 are NOT leap years*/
