#include<stdio.h>
int main()
{
    int P,C,B,M,c;
    scanf("%d %d %d %d %d", &P, &C, &B, &M, &c);

    switch (P/10,C/10,B/10,M/10,c/10)
{

  case 10:
      printf("A\n");
  case 9:
      printf("A\n");
  case 8:
    printf("B\n");

  case 7:
    printf("C\n");

  case 6:
      printf("D\n");
  case 5:
    printf("D\n");

  case 4:
    printf("E\n");

  default:
    printf("F");
}
    return 0;
}
