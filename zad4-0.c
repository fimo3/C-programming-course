#include <stdio.h>
#include "debug_sort.h"

int main() {
    int arr[] = {10, 2, 30, 1, 5, 4, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_and_sum(arr, size);

    return 0;
}
