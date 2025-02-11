#include <stdio.h>
#include <math.h>

void raise_to_fourth(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}

int main() {
    long numbers[] = {2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    raise_to_fourth(numbers, size);

    printf("Масив след повдигане на четвърта степен:\n");
    for (int i = 0; i < size; i++) {
        printf("%ld ", numbers[i]);
    }
    printf("\n");

    return 0;
}
