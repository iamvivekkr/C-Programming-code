// USING SWITCH & BREAK MAKE CALCULATOR

#include<stdio.h>
int main()
{
    float a, b;
    char oper;
    printf("Enter any operator: "); //always write first operator
    scanf("%c", &oper);
    printf("Enter two numbers: ");  //then operants
    scanf("%f %f", &a, &b);
    

    switch (oper)
    {
    case '+':
        printf("%f+%f=%f", a,b, a+b);
        break;
    case '-':
        printf("%f-%f=%f", a,b, a-b);
        break;
    case '*':
        printf("%f*%f=%f", a,b, a*b);
        break;
    case '/':
        printf("%f/%f=%f", a,b, a/b);
        break;
    default:
        printf("error");
        break;
    }
    return 0;
}