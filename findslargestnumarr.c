#include <stdio.h>

int second_largest(int arr[], int size) {
    int largest = arr[0], second_largest = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = second_largest(arr, size);
    printf("Second largest element: %d\n", result);
    return 0;
}
