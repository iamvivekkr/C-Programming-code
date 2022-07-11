//WRITE PROGRAM TO FIND AVERAGE MARKS BUT NOONE CAN SEE ANY USERS ACTUAL MARKS
//FIRST USER SHOULD HAVE TO TYPE INCORRECT MARKS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d", &n);
        system("cls");
        sum+=n;
    }
    printf("Enter extra marks added by student 1: ");
    scanf("%d", &n);
    system("cls");
    sum-=n;
    float avg=(float) sum/10;
    printf("the average is %f", avg);
    return 0;
    
}