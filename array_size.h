#ifndef ARRAY_SIZE_H
#define ARRAY_SIZE_H

#include <stdio.h>

#define ARRAY_SIZE 5

void create_and_print_array() {
    #if defined(ARRAY_SIZE) && (ARRAY_SIZE > 0 && ARRAY_SIZE <= 10)
        int arr[ARRAY_SIZE];

        for (int i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = (1 << i);
        }
        
        printf("Array elements:\n");
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", arr[i]);
        }
    #else
        printf("Invalid array size.\n");
    #endif
}

#endif // ARRAY_SIZE_H
