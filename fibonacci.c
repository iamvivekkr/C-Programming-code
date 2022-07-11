//FIBONACCI SERIES  0, 1, 0+1, 1+2, 3+4....

#include<stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, n;    //if c=3 then no need to use c++
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", a, b);
    c = a + b;
    while (c <= n)
    {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a +b;
        
    }c++;
    return 0;
}