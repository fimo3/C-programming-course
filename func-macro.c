#include<stdio.h>

#define DEFINE_ARRAY(TYPE, NAME) \
    TYPE NAME[5]

#define PRINT_ARRAY(NAME) \
    for (int i = 0; i < 5; i++) { \
        printf("%d: %d\n", i, NAME[i]); \
    }

int main() {
    DEFINE_ARRAY(int, a);
    PRINT_ARRAY(a);


    return 0;
}