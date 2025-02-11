#include <stdio.h>
#include "quadraticroots.h"

int main() {
    QuadraticRootsResult res;

    res = findroots(1, -3, 2);
    if (res.norealroots) {
        printf("No real roots for int arguments.\n");
    } else {
        printf("Roots for int arguments: x1 = %.2Lf, x2 = %.2Lf\n", res.x1, res.x2);
    }

    res = findroots(1.0f, -2.5f, 1.0f);
    if (res.norealroots) {
        printf("No real roots for float arguments.\n");
    } else {
        printf("Roots for float arguments: x1 = %.2Lf, x2 = %.2Lf\n", res.x1, res.x2);
    }

    res = findroots(1.0, 0.0, -4.0);
    if (res.norealroots) {
        printf("No real roots for double arguments.\n");
    } else {
        printf("Roots for double arguments: x1 = %.2Lf, x2 = %.2Lf\n", res.x1, res.x2);
    }

    return 0;
}
