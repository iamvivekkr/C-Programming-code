//FIND WHICH IS ZERO OR NON ZERO

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a)
    {
        printf("it is non zero");
    }
    else
    {
        printf("it is zero");
    }
    return 0;
}