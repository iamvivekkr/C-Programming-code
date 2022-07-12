//CONTINUE

#include<stdio.h>
int main()
{
    
    for (int i = 0; i < 11; i++)
    {
        // printf("\n%d", i);
        if (i==5)
        {
            
            continue;
        }
        printf("\n%d", i);
        
    }
    return 0;
}