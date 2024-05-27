#include <iostream>

const int MAX_VALUE = 10; // Assuming a maximum value for array elements

int* createFrequencyArray(const int* arr, int size) {
    int* frequencyArray = new int[MAX_VALUE + 1](); // Initialize frequency array with zeros

    // Count frequencies
    for (int i = 0; i < size; ++i) {
        frequencyArray[arr[i]]++;
    }

    return frequencyArray;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 5, 4, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* frequencyArray = createFrequencyArray(arr, size);

    std::cout << "Frequency Array: ";
    for (int i = 0; i < MAX_VALUE + 1; ++i) {
        if (frequencyArray[i] != 0) {
            std::cout << frequencyArray[i] << " ";
        }
    }
    std::cout << std::endl;

    delete[] frequencyArray; // Don't forget to free the allocated memory

    return 0;
}
