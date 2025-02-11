#ifndef SORT_BY_OS_H
#define SORT_BY_OS_H

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #define OS_WINDOWS
#elif defined(__linux__)
    #define OS_LINUX
#elif defined(__APPLE__)
    #define OS_MACOS
#else
    #define OS_OTHER
#endif

void bubble_sort(int arr[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted using Bubble Sort (Windows): ");
}

void selection_sort(int arr[], int size) {
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Array sorted using Selection Sort (Linux): ");
}

void insertion_sort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Array sorted using Insertion Sort (MacOS): ");
}

void reverse_array(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    printf("Array reversed (Other OS): ");
}

void sort_array_by_os(int arr[], int size) {
    #ifdef OS_WINDOWS
        bubble_sort(arr, size);
    #elif defined(OS_LINUX)
        selection_sort(arr, size);
    #elif defined(OS_MACOS)
        insertion_sort(arr, size);
    #else
        reverse_array(arr, size);
    #endif

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

#endif // SORT_BY_OS_H
