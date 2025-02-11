#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while (0)

int main() {
    int a = 10, b = 20;
    printf("Before SWAP: a = %d, b = %d\n", a, b);
    SWAP(a, b, int);
    printf("After SWAP: a = %d, b = %d\n", a, b);
    return 0;
}
