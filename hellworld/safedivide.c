#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Невалидни аргументи.\n");
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    SafeResult result = safedivide(a, b);
    if (result.errorflag) {
        printf("Грешка: Деление на нула или друга грешка.\n");
    } else {
        printf("Частното е: %d\n", result.value);
    }
    return 0;
}
