#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (array[j] <= pivot) {
            ++i;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);

    return (i + 1);
}

void quick_sort_recursive(int *array, int low, int high) {
    if (low < high) {
        int pivot_index = partition(array, low, high);
        
        // Print the array after each swap
        for (int i = low; i <= high; ++i) {
            printf("%d", array[i]);
            if (i != high)
                printf(", ");
        }
        printf("\n");

        quick_sort_recursive(array, low, pivot_index - 1);
        quick_sort_recursive(array, pivot_index + 1, high);
    }
}

void quick_sort(int *array, size_t size) {
    quick_sort_recursive(array, 0, size - 1);
}
