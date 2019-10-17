#include <iostream>

#include "Usefull.h"
#include "MergeSort.h"

void MergeSort(int array[], int arraySize) {

    // Recursive end
    if (arraySize == 1) {
        return;
    }
  
    // Recursive call
    // Divide the array in two parts until arraySize = 2
    int arraySizeA = arraySize/2;
    int arraySizeB = arraySize - arraySizeA;
    int* arrayA = array;
    int* arrayB = array + arraySizeA;
    MergeSort(arrayA, arraySizeA);
    MergeSort(arrayB, arraySizeB);

    int a = 0;
    int b = 0;
    int t = 0;
    int arrayTemp[arraySize]; // Always after the recursive call
    while (a < arraySizeA && b < arraySizeB) {
        if (arrayA[a] <= arrayB[b]) {
            arrayTemp[t] = arrayA[a];
            a++;
        } else {
            arrayTemp[t] = arrayB[b];
            b++;
        }
        t++;
    }
    
    // Copy the remaining elements
    while (a < arraySizeA) {
        arrayTemp[t] = arrayA[a];
        a++;
        t++;
    }
    while (b < arraySizeB) {
        arrayTemp[t] = arrayB[b];
        b++;
        t++;
    }

    // Copy the temp array to the original
    for (int i = 0; i < arraySize; i++) {
        array[i] = arrayTemp[i];
    }
}