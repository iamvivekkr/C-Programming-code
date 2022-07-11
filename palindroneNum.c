//TO CHECK PALINDRONE

#include<stdio.h>
int main()
{
    int n,  r, rev=0, temp;
    printf("enter a no to check is it palintrone or not: ");
    scanf("%d", &n);
    temp=n;
    
    while(n>0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("Palindrone number");
    }
    else
    {
        printf("Not palindrone number");
    }
    return 0;
}