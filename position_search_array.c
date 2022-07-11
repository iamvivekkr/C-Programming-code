//SEARCH POSITION OF A NUMBER IN AN ARRAY

#include<stdio.h>
int main()
{
    int b;
    int arr[10]={1,2,3,4,6,7,8,9,11};
    printf("Enter element to search:");
    scanf("%d", &b);
    for (int i = 0; i < 10; i++)
    {
        if (b==arr[i])
        {
           printf("position of %d is = %d", b,i);
        }
        
    }
   
    
    return 0;
}