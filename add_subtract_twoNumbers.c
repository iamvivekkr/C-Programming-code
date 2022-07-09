//ADD, SUB, MULTI, DIV

#include<stdio.h>
int main()
{
    int a=4, b=2, c, d, e, f;
    c=a+b;
    //c=a-(-b);   add without using add sign
    printf("%d", c);
    d=a-b;
    printf("\n%d", d);
    e=a*b;
    printf("\n%d", e);
    f=a/b;
    printf("\n%d", f);
}