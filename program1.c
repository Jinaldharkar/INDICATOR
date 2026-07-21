#include <stdio.h>

int main()
{
    char str[10];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s",str);

    ptr = str;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("Length of the string = %d", length);

    
}
