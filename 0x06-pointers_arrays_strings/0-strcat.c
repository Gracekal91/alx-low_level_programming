#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, const char *src);

int main(void)
{
    char dest[20] = "Hello";
    const char *src = " world!";

    printf("Before concatenation: %s\n", dest);

    _strcat(dest, src);

    printf("After concatenation: %s\n", dest);

    return 0;
}


