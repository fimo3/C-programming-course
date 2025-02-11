#include <stdio.h>
#include "sort_by_os.h"

int main() {
    int arr[] = {10, 2, 30, 1, 5, 4, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_array_by_os(arr, size);

    return 0;
}
