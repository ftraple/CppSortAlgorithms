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
Merge Sort | O(nLogn) | O(nLogn) | O(n) + Recursive calls on the Heap
Quick Sort | O(nLogn) | O(n²) | O(1) + Recursive calls on the Heap
Heap Sort | O(nLogn) | O(nLogn) | O(1)

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

Merge sort is a "dived and conquer algorithm", It devides input array in two halves, calls itself for the two halves and merges the two sorted halves.

## Quick Sort

The quick sort algorithm is a "divide and conquer algorithm". 

1) First, you need to choose a element as "pivot", could be any element in the array.
2) Second, you need find the right position for the pivot, separating the smaller elements to the left and the larger elements to the right.
3) Third, you need to perform this process recursivily until all the elements are in their respective positions.

## Heap Sort

Heap sort is a comparison based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find the maximum element and place the maximum element at the end. We repeat the same process for remaining element.

