#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int weightedSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i] * i;
    }
    return sum;
}

int main() {
    int arr[] = {1, 7, 3, 4, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    printf("Weighted sum: %d\n", weightedSum(arr, size));
    return 0;
}
