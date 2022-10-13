/// \file
#include "function.cpp"
/**
* int main()
* Module: Section 1
* Author: Vedant Patel
* Date:   09/10/2022
* Purpose: It will print the time taken to sort the array of three different sizes.
* 
* Function   : main 
* 
* Parameters : N/A
* 
* Output : 0
*          
*/
int main()
{
    // creating array to store the intermediate results for each of the size arrays.
    double result[totalSize][totalColumns];
    // Iterating through different sizes of the array.
    for (int i = 0; i < totalSize; i++)
    {
        // Iterating through total Columns(10) for the test Cases.
        for (long j = 0; j < totalColumns; j++)
        {
            // Creating new array(dynamic) to store the values of the random integer of particular size.
            long *array = new long[sizeArray[i]];

            for (long k = 0; k < sizeArray[i]; k++)
            {
                // assigning random values to the array.
                array[k] = rand();
            }
            storeResult(array, i, j, result);
        }
        // printing the total size of the array.
        cout << setw(30) << " "
             << "Total Size : " << sizeArray[i] << endl;
        cout << endl;
        // Printing the header
        printTestHeader();
        // Printing the time taken to sort the array in 3 ways.(Normal,sorted,Reverse)
        printResult(result);
        cout << endl;
    }
    return 0;
}