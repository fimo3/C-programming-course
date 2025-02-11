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
    SafeResult result = safemultiply(a, b);
    if (result.errorflag) {
        printf("Грешка: Препълване при умножение.\n");
    } else {
        printf("Произведението е: %d\n", result.value);
    }
    return 0;
}
