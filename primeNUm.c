//FIND NUMBER IS PRIME OR NOT

#include<stdio.h>
int main()
{
    int a, count=0;
    printf("Enter any number: ");
    scanf("%d", &a);
    for(int i=2; i<=a/2; i++)
    {
        if(a%i==0)
        {
           count++;
        }
    }
    
    if(a==1)
    {
        printf("no prime no comp");
    }
    else
    {
    if(count==0)
    
        printf("is prime");
        
    
    else
    
        printf("not prime");
        
    }
return 0;
}