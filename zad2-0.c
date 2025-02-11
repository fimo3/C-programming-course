#include <stdio.h>

#define DEFINE_ARRAY(TYPE, NAME) \
    TYPE NAME[5]

#define PRINT_ARRAY(NAME) \
    for (int i = 0; i < 5; i++) { \
        printf("%d: %d\n", i, NAME[i]); \
    }

int main() {
    DEFINE_ARRAY(int, arr) = {5, 3, 8, 1, 9};
    PRINT_ARRAY(arr);
    return 0;
}
