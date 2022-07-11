//ODD NUMBER UPTO 100 USING FOR LOOP

#include<stdio.h>
int main()
{
    int n;
    printf("odd number upto 100: ");
    
            for(n=1; n<=100; n++)
            {
             if(n%2==1)
            printf("%d,", n);
            }

    return 0;
}