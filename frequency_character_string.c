//FREQUENCY CHARACTER IN STRING

#include <stdio.h>
int main()
{   int count = 0;
    char str[10], ch;
    

    printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);
    scanf("%c", &str);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}