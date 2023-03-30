#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter the String");
    gets(str);
    int length = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        length++;

    for (int i = 0; i < length; ++i)
    {
        if (str[i] != str[length - i - 1])
        {
            printf("Not Palindrome");
            exit(0);
        }
    }
    printf("Palindrome");
    return 0;
}
