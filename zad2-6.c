#include <stdio.h>

#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = i + 1; j < SIZE; j++) { \
            if (ARRAY[i] COMPARE ARRAY[j]) { \
                SWAP(ARRAY[i], ARRAY[j], TYPE); \
            } \
        } \
    }

#define PRINT_ARRAY(NAME, SIZE) \
    for (int i = 0; i < SIZE; i++) { \
        printf("%d: %d\n", i, NAME[i]); \
    }

int main() {
    int array[5] = {4, 2, 7, 1, 5};
    SORT(array, 5, int, >); // Сортиране във възходящ ред
    printf("Sorted array in ascending order:\n");
    PRINT_ARRAY(array, 5);
    return 0;
}
