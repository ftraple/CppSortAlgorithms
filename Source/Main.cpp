#include <iostream>

#include "Usefull.h"
#include "SelectionSort.h"
#include "BubbleSort.h"

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

    return EXIT_SUCCESS;
}
