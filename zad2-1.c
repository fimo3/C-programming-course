#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 5, y = 8;
    printf("Max value: %d\n", MAX(x, y));
    return 0;
}
