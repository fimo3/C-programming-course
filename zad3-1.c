#include <stdio.h>
#include <stdlib.h>

#define DEBUG
#define ARRAY_SIZE 5

void sortArray(int* arr, int size) {
    #if defined(_WIN32)
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    #elif defined(__linux__)
        for (int i = 0; i < size - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }
            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    #elif defined(__APPLE__)
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    #else
        for (int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    #endif
}

void processArray(int* arr, int size) {
    int sum = 0;
    sortArray(arr, size);
    
    #ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    #endif

    printf("Elements at indices divisible by 3: ");
    for (int i = 0; i < size; i += 3) {
        sum += arr[i];
        #ifdef DEBUG
        printf("%d ", arr[i]);
        #endif
    }
    printf("\nSum of elements at indices divisible by 3: %d\n", sum);
}

int main() {
    #if defined(ARRAY_SIZE) && ARRAY_SIZE > 0 && ARRAY_SIZE <= 10
        int arr[ARRAY_SIZE];
        for (int i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = 1 << i; 
        }

        printf("Array elements:\n");
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", arr[i]);
        }

        processArray(arr, ARRAY_SIZE);
    #else
        printf("Invalid array size. Supported array size is between 1 and 10.\n");
    #endif

    return 0;
}
