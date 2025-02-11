#include <stdio.h>

long decimalToBinary(int num) {
    if (num == 0) return 0;
    return (num % 2) + 10 * decimalToBinary(num / 2);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("Binary: %ld\n", decimalToBinary(num));
    return 0;
}
