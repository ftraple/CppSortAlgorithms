#include <iostream>

void PrintArray(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Swap(int *aValue, int *bValue) {  
    int tempValue = *aValue;  
    *aValue = *bValue;  
    *bValue = tempValue;  
}