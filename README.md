# Quick-sort
simple C program for quick sort, this sorting technique is also based on divide and conquer method.

Analysis of QuickSort
Time taken by QuickSort in general can be written as following.
The time taken by QuickSort depends upon the input array and partition strategy. Following are three cases.

Worst Case:
The worst case occurs when the partition process always picks greatest or smallest element as pivot. If we consider above partition strategy where last element is always picked as pivot, the worst case would occur when the array is already sorted in increasing or decreasing order. 
O(n2).

Best Case: 
The best case occurs when the partition process always picks the middle element as pivot. Following is recurrence for best case.
O(nLogn).

Average Case:
To do average case analysis, we need to consider all possible permutation of array and calculate time taken by every permutation which doesn’t look easy.
O(nLogn)

