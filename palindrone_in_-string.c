//PALINDRONE IN STRING

#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i, l, c=0;
    printf("Enter a string: ");
    scanf("%s", &str);
    l=strlen(str);
    for (i = 0; i < l; i++)
    {
        if(str[i]!=str[l-i-1])
        {
            c=1;
            break;
        }
    }
    if (c)
    {
        printf("%s is palindrone",str);
    }
    else
    {
        printf("%s is palindrone",str);
    }
    return 0;
}