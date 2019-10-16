
#include "SelectionSort.h"
#include "Usefull.h"

void SelectionSort(int array[], int arraySize) {
    // Loop from begin until the end 
    for (int orderedIndex = 0; orderedIndex < arraySize - 1; orderedIndex++) {
        // Find the smallest value in the part of the array
        int smallestValueIndex = orderedIndex;
        for (int searchIndex = orderedIndex + 1; searchIndex < arraySize; searchIndex++) {
            if (array[searchIndex] < array[smallestValueIndex]) {
                smallestValueIndex = searchIndex;
            }
        }
        // Put the smallest value at the begin of the array
        if (smallestValueIndex != orderedIndex) {
            Swap(&array[orderedIndex], &array[smallestValueIndex]);
        }
    }
}
