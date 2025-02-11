#include "quadraticroots.h"
#include <math.h>

QuadraticRootsResult findroots(long double a, long double b, long double c) {
    QuadraticRootsResult result;
    long double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        result.norealroots = true;
    } else {
        result.norealroots = false;
        result.x1 = (-b + sqrtl(discriminant)) / (2 * a);
        result.x2 = (-b - sqrtl(discriminant)) / (2 * a);
    }

    return result;
}
