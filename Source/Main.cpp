#include <iostream>

#include "Usefull.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

int main() {
    
    int array1[] = {6, 5, 8, 3, 2, 1, 4, 7};
    std::cout << "Selection Sort" << std::endl;
    PrintArray(array1, 8);
    SelectionSort(array1, 8);
    PrintArray(array1, 8);

    std::cout << "Bubble Sort" << std::endl;
    int array2[] = {6, 5, 8, 3, 2, 1, 4, 7};
    PrintArray(array2, 8);
    BubbleSort(array2, 8);
    PrintArray(array2, 8);

    std::cout << "Insertion Sort" << std::endl;
    int array3[] = {6, 5, 8, 3, 2, 1, 4, 7};
    PrintArray(array3, 8);
    InsertionSort(array3, 8);
    PrintArray(array3, 8);

    std::cout << "Merge Sort" << std::endl;
    int array4[] = {6, 5, 8, 3, 2, 1, 4, 7};
    PrintArray(array4, 8);
    MergeSort(array4, 8);
    PrintArray(array4, 8);

    std::cout << "Quick Sort" << std::endl;
    int array5[] = {6, 5, 8, 3, 2, 1, 4, 7};
    PrintArray(array5, 8);
    QuickSort(array5, 0, 7);
    PrintArray(array5, 8);

    std::cout << "Heap Sort" << std::endl;
    int array6[] = {6, 5, 8, 3, 2, 1, 4, 7};
    PrintArray(array6, 8);
    HeapSort(array6, 8);
    PrintArray(array6, 8);

    return EXIT_SUCCESS;
}
