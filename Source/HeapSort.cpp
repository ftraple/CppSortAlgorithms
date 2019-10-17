#include <iostream>

#include "Usefull.h"
#include "HeapSort.h"

void Heapify(int array[], int arraySize, int index) {
    int biggest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    // Check if the left child is bigger then the parent
    if (left < arraySize && array[left] > array[biggest]) {
        biggest = left;
    }
    // Check if the right child is bigger then the parent
    if (right < arraySize && array[right] > array[biggest]) {
        biggest = right;
    }
    // Check if the biggest value is not the parent
    if (biggest != index) {
        Swap(&array[index], &array[biggest]);
        // Call again until achieve the end
        Heapify(array, arraySize, biggest);
    }
}

void HeapSort(int array[], int arraySize) {
    // Build the max heap
    for (int index = arraySize/2 - 1; index >= 0; index--) {
        Heapify(array, arraySize, index);
    }
    // One by one extract an element from the max heap
    for (int index = arraySize - 1; index >= 0; index--) { 
        // Move current root to end 
        Swap(&array[0], &array[index]); 
          // Call heapify on the reduced heap 
        Heapify(array, index, 0); 
    } 
}
