#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat_strings(const char *s1, const char *s2) {
    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);
    char *result = (char *)malloc(s1_len + s2_len + 1);

    if (result == NULL) {
        fprintf(stderr, "Error: Failed to allocate memory for concatenated string.\n");
        return NULL;
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}

int main() {
    const char *str1 = "Hello, ";
    const char *str2 = "world!";

    char *result = concat_strings(str1, str2);
    if (result != NULL) {
        printf("%s\n", result);
        free(result);
    }

    return 0;
}

