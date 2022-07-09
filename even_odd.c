//EVEN ODD PROGRAM

#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("it is even");
    }
    else
    {
        printf("it is odd");
    }
    return 0;
}