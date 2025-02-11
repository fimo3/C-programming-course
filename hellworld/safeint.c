#include <stdio.h>
#include "safeint.h"

#define INT_MAX 2147483647
#define INT_MIN (-2147483648)

SafeResult safeadd(int a, int b) {
    SafeResult result;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = a + b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b)) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = a - b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safemultiply(int a, int b) {
    SafeResult result;
    if (a != 0 && (a > INT_MAX / b || a < INT_MIN / b)) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = a * b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safestrtoint(const char *str) {
    SafeResult result;
    char *endptr;
    long val = strtol(str, &endptr, 10);
    if (val > INT_MAX || val < INT_MIN) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = (int)val;
        result.errorflag = 0;
    }
    return result;
}
