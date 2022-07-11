//DELETE ELEMENT WITH SPACE IN ARRAY

#include<stdio.h>
int main()
{
    int a[]={10,20,30,8,1};
    int c=8, n=5;
    for(int i=0;i<n;i++)
    {
        if(c==a[i])
        {
        for (int j = 0; j < n; j++)
        {
            a[j]=a[j+1];
        }
        n--;
        }
        printf("%d ", a[i]);
        
    }
    return 0;
}