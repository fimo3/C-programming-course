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
    int a, b = 0;
    scanf("%d %d", &a, &b);
    printf("Най-малко общо кратно на %d и %d е: %d\n", a, b, lcm(a, b));
    return 0;
}
