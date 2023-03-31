#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the String");
    gets(str);
    int no_of_spaces = 0;

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == ' ' && isalpha(str))
            no_of_spaces++;
    }

    printf("No of words : %d", no_of_spaces + 1);
    return 0;
}
