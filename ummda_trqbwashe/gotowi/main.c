#include <stdio.h>

#define SQUARE_SUM(A, B) (((A) + (B)) * ((A) + (B)))

int main() {
    int a, b;
    printf("Въведете а и б: ");
    scanf("%d %d", &a, &b);
    int result = SQUARE_SUM(a, b);
    printf("Резултатът от (%d + %d)^2 е: %d\n", a, b, result);
    return 0;
}
