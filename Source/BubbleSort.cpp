#include <iostream>

#include "Usefull.h"
#include "BubbleSort.h"

void BubbleSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize-1; i++) {
        bool swapped = false;
        for (int j = 0; j < arraySize-i-1; j++) {
            if (array[j] > array[j+1]) {
                Swap(&array[j], &array[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
