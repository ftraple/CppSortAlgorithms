#include <iostream>

void PrintArray(int array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void Swap(int *aValue, int *bValue) {  
    int tempValue = *aValue;  
    *aValue = *bValue;  
    *bValue = tempValue;  
}