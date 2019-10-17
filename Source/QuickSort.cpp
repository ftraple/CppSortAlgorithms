#include <iostream>

#include "Usefull.h"
#include "QuickSort.h"

int Partition(int array[], int low, int high) {
    // The pivot has been defined as the highest element
    int pivot = array[high];
    int newIndex = low;
    // Swap all the smaller values to the left of the pivot
    for (int index = low; index <= high - 1; index++) {
        if (array[index] < pivot) {
            Swap(&array[newIndex], &array[index]);
            newIndex++;
        }
    }
    // Put the pivot in the correct position
    Swap(&array[newIndex], &array[high]);
   
    return newIndex; // Return the position of the pivot
}

void QuickSort(int array[], int low, int high) {
    if (low < high) {
        int pivotIndex = Partition(array, low, high);
        // Recursive call for the left part
        QuickSort(array, low, pivotIndex - 1);
        // Recursive call for the right part
        QuickSort(array, pivotIndex + 1, high);
    }
}
