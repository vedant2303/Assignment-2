/// \file
#include <bits/stdc++.h>
using namespace std;

// Initialize the array of different sizes
long int sizeArray[] = {10000, 100000, 1000000};

// Total cases to be covered.(Random,Sorted,Reverse)
const int totalSize = 3;
// Total test cases for each size of an array.
const int totalColumns = 10;

/**
 * double calTime(long *array, long size)
 * Module: Section 1
 * Author: Vedant Patel
 * Date:   09/10/2022
 * Purpose: To calculate the time taken to sort the array.
 *
 * Function   : calTime
 *
 * Parameters :
 *           1) array : long array is passed as an argument.
 *           2) size  : length of the array.
 *
 * Output :
 *         time : double - For Example: 0.002173
 *
 * Example of Usage:
 *
 *   double time=calTime([10,4,2,17,89],5);
 *
 */


double calTime(long *array, long size);
/**
 * void printResult(double result[][10])
 * Module: Section 1
 * Author: Vedant Patel
 * Date:   09/10/2022
 * Purpose: To print the result(sorting time) of each array sizes and its test cases on the console.
 *
 * Function   : printResult
 *
 * Parameters :
 *           1) array : long array is passed as an argument.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *   printResult(result);
 *
 */
void printResult(double result[][10]);


/**
 * void printTestHeader()
 * Module: Section 1
 * Author: Vedant Patel
 * Date:   09/10/2022
 * Purpose: To print the header for the test cases for each column.
 *
 * Function   : printTestHeader
 *
 * Parameters : N/A
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *   printTestHeader();
 *
 */
void printTestHeader();

/**
 * void storeResult(long *array, long i, long j, double result[][10])
 * Module: Section 1
 * Author: Vedant Patel
 * Date:   09/10/2022
 * Purpose: To calculate the sorting time of the array and store it in the result.
 *
 * Function   : storeResult
 *
 * Parameters : 
 *            1) array  - Random array to calculate the time for.
 *            2) i      - Row subscript for the result array.
 *            3) j      - Column subscript for the result array.
 *            4) result - Array will store the sorting time for each size and test case.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *   storeResult(array,0,8,result);
 *
 */
void storeResult(long *array, long i, long j, double result[][10]);
