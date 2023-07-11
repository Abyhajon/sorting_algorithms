#include <iostream>

void bubble_sort(int *array, size_t size) {
    for (size_t i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            // If no swaps were made in the inner loop, the array is already sorted
            break;
        }
        
        // Print the array after each swap
        for (size_t k = 0; k < size; ++k) {
            std::cout << array[k] << " ";
        }
        std::cout << std::endl;
    }
}
