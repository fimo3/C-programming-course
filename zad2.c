#include <stdio.h>

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() {
    int num = 417;
    printf("Product of digits: %d\n", productOfDigits(num));
    return 0;
}
