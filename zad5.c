#include <stdio.h>

char maxAsciiChar(const char* str) {
    char maxChar = str[0];
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] > maxChar) maxChar = str[i];
    }
    return maxChar;
}

int main() {
    char str[] = "efijofdjoiefjoiejfoijieoasj";
    printf("Max ASCII char: %c\n", maxAsciiChar(str));
    return 0;
}
