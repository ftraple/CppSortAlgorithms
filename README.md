# Sorting Algorithms

A sorting algorithm is used to organize a given array or list of elements that need to be ordered.

## Index

* Selection Sort
* Buble Sort
* Inserction Sort
* Merge Sort
* Quick Sort
* Heap Sort

## Time Complexity
 
Algorithm | Best Case | Worst Case | Extra Space 
----------|-----------|------------|------------
Selection Sort | O(n²) | O(n²) | O(1)
Bubble Sort | O(n) | O(n²) | O(1)
Inserction Sort | O(n) | O(n*2) | O(1)
Merge Sort | O(nLogn) | O(nLogn) | O(n) + Recursive Space in the Heap

## Selection Sort

The selection sort is the most simple sort algorithm. It consisted of two nested loops.

1) The first loop goes from the begin until the end, and call the second loop.
2) The second loop finds the next smaller value in the unsorted part of the array.

These steps are repeated until the end of the array to be achieved and all values are sorted.

## Bubble Sort

The buble sort algorithm works by repeateddly swapping the adjacents elements if they are in wrong order.

## Insertion Sort

Sorting by selection works like cards in your hand when you are trying to organize them.

## Merge Sort

Merge sort is a dived and conquer algorithm, It devides input array in two halves, calls itself for the two halves and merges the two sorted halves.

