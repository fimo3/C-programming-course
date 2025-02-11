#ifndef DEBUG_SORT_H
#define DEBUG_SORT_H

#include <stdio.h>
#include <stdlib.h>

#define DEBUG

void sort_and_sum(int arr[], int size) {
    int sum = 0;
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    #ifdef DEBUG
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Elements at indices divisible by 3: ");
    #endif

    for (i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
            #ifdef DEBUG
            printf("%d ", arr[i]);
            #endif
        }
    }

    printf("\nSum of elements at indices divisible by 3: %d\n", sum);
}

#endif
