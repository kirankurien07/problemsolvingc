#include <stdio.h>

void find_max_min(int arr[], int size) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
}

int main() {
    int arr[] = {12, 5, 9, 20, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    find_max_min(arr, size);
    return 0;
}
