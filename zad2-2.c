#include <stdio.h>

#define DEBUG_VAR(VAR) \
    printf("Variable %s = %d, File: %s, Line: %d\n", #VAR, VAR, __FILE__, __LINE__)

int main() {
    int x = 42;
    DEBUG_VAR(x);
    return 0;
}
