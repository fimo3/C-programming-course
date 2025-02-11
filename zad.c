#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfPrimes(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of primes: %d\n", sumOfPrimes(arr, size));
    return 0;
}
