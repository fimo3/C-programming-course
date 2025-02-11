#include <stdio.h>

// 2. 
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 3.
#define DEBUG_VAR(VAR) \
    printf("Variable %s = %d, File: %s, Line: %d\n", #VAR, VAR, __FILE__, __LINE__)

// 4.
#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command

#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("Internal quit command executed.\n");
}

DEFINE_COMMAND(start, external) {
    printf("External start command executed.\n");
}

// 5.
#define SWAP(A, B, TYPE) \
    do { \
        TYPE temp = A; \
        A = B; \
        B = temp; \
    } while (0)

// 6.
#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = i + 1; j < SIZE; j++) { \
            if (ARRAY[i] COMPARE ARRAY[j]) { \
                SWAP(ARRAY[i], ARRAY[j], TYPE); \
            } \
        } \
    }