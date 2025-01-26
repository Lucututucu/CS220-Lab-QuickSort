/** 
 * ===========================================================
 * Name: Lucas Briggs
 * Section: T4 Crowl
 * Project: QuickSort
 * ===========================================================
 * Instructions:
 *    1) Complete TASKS Below
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortfuncts.h"

int main() {
    int nums[N];

    // set up for and then seed random number
    // generator
    srand((unsigned)(time(NULL)));  // use for development/debugging
    srand(2023); // uncomment for submission
    
    /* TASK 0 - implement the function, quickSort() below
     * Help - the partition prototype is given to you above
     */
    fillArray(nums);
    printf("Quick Sort: ");
    quickSort(nums, 0, N - 1);
    printArray(nums, N);

    return 0;
}