//SWAP TWO NO USING VAR

#include<stdio.h>
int main()
{
    int a=4, b=2;
    printf("Before swap %d %d", a, b);
    a=a+b; //a=4+2=6
    b=a-b; //b=6-2=4
    a=a-b; //a=6-4=2
    printf("\nAftere swap %d %d", a, b);
    return 0;
}