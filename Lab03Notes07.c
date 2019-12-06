#include<stdio.h>
int main()
{
    int M,B,C,D,E,F,G,H,I,J,T;
    printf("Enter Your Amount: ");
    scanf("%d", &M);

    B=M/1000;
    M=M%1000;
    C=M/500;
    M=M%500;
    D=M/100;
    M=M%100;
    E=M/50;
    M=M%50;
    F=M/20;
    M=M%20;
    G=M/10;
    M=M%10;
    H=M/5;
    M=M%5;
    I=M/2;
    M=M%2;
    J=M/1;
    T=B+C+D+E+F+G+H+I+J;
    printf("Total Amount of Notes: %d", T);

    return 0;
}
