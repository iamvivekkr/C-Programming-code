//MULTIPICATION OF MATRIX

#include<stdio.h>
int main()
{
    int a[5][5], b[5][5], mul[5][5], r, c;
//print nd store row nd column
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);

//print nd store first matrix
    printf("Enter first matrix element=\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
//print nd store second matrix
    printf("Enter second matrix element=\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
//matrix multiplication
    printf("Multiply of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j]=0;
            for (int k = 0; k < c; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
//printing result
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}