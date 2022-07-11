//PRINT ARRAY

#include<stdio.h>
int main()
{   int i;
    int arr[]={1,2,3,4,5};
    for(i=0;i<=4;i++)
    {
    printf("\nthe value is %d", arr[i]);
    }

    for (i = 4; i >=0; i--)
    {
      printf("\nthe value in opposite is %d", arr[i]);
    }
    
    return 0;
}