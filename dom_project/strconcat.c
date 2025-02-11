#include <stdio.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Invalid number of arguments.\n");
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50) {
        printf("Error: Each input string must not exceed 50 characters.\n");
        printf("String1 length: %zu, String2 length: %zu\n", strlen(argv[1]), strlen(argv[2]));
        return 1;
    }

    char dest[101] = {0};
    strcpy(dest, argv[1]);
    strconcat(dest, argv[2]);
    printf("Concatenated string: %s\n", dest);

    return 0;
}
