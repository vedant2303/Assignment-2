/// \file
#include "function.h"

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
double calTime(long *array, long size)
{
    // Time to be noted before the execution of the sorting function.
    clock_t begin = clock();
    // Sort the array using the C++ builtin sort function.
    sort(array, array + size);
    // Time to be noted after the execution of the sorting function.
    clock_t end = clock();
    // Returning the time to sort the array.
    return (double)(end - begin) / CLOCKS_PER_SEC;
}

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
void printResult(double result[][10])
{
    for (int i = 0; i < 3; i++)
    {
        // Printing row Header
        if (i == 0)
        {
            cout << setw(10) << left << "Random" << setw(2) << right << "|";
        }
        if (i == 1)
        {
            cout << setw(10) << left << "Sorted" << setw(2) << right << "|";
        }
        if (i == 2)
        {
            cout << setw(10) << left << "Reverse" << setw(2) << right << "|";
        }
        // Printing the time taken by each .(Random,Sorted,Reverse)
        for (int j = 0; j < 10; j++)
        {
            cout << setw(5) << left << result[i][j] << " |";
        }
        cout << endl;
    }
}

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
void printTestHeader()
{
    // Printing the column headers
    cout << setw(10) << left << "Test Case" << setw(2) << right << "|";
    for (int i = 0; i < 10; i++)
    {
        cout << setw(5) << left << "Test" << i + 1 << "|";
    }
    cout << endl;
}

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
void storeResult(long *array, long i, long j, double result[][10])
{
    // storing the time in the result array.
    // [0] -> For Random
    // [1] -> For Sorted
    // [2] -> For Reverse
    result[0][j] = calTime(array, sizeArray[i]);
    result[1][j] = calTime(array, sizeArray[i]);
    reverse(array, array + sizeArray[i]);
    result[2][j] = calTime(array, sizeArray[i]);
}
