#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a = 12;
    int b = 18;
    int result = lcm(a, b);

    printf("lcm from %d and %d is: %d\n", a, b, result);

    return 0;
}
