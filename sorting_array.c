//SORTING OF ANUMBER USING ARRAY

#include<stdio.h>
int main()
{
    int temp=0;
    int arr[]={23,1,45,3,4};
   
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }


    printf("in ascending order:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }
    
    return 0;
}