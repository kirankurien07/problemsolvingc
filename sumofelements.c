#include <stdio.h>

int sum_of_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sum_of_array(arr, size);
    printf("Sum of array elements: %d\n", result);
    return 0;
}
