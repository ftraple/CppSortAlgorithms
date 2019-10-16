#include <iostream>

#include "Usefull.h"
#include "InsertionSort.h"

void InsertionSort(int array[], int arraySize) {

    for (int i = 1; i < arraySize; i++) {

        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j+1] = array[j];
            j -= 1;
        }
        array[j+1] = key;
    }
}

