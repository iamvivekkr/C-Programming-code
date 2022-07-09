//SWAP TWO NUM USING TEMP

#include<stdio.h>
int main()
{
    int a=4, b=2, t;
    printf("Before swap %d %d", a, b);
    t=a;
    a=b;
    b=t;
    printf("\nAftere swap %d %d", a, b);
    return 0;

}