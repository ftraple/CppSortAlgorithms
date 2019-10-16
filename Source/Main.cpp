#include <iostream>

#include "Usefull.h"
#include "SelectionSort.h"


int main() {
    
    int arr[] = {6, 5, 8, 3, 2, 1, 4, 7};
    
    PrintArray(arr, 8);
    SelectionSort(arr, 8);
    PrintArray(arr, 8);

    return EXIT_SUCCESS;
}
