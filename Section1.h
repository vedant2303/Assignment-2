/**
 * Section1.h - this header file containes some basic functionalities that can be used for sorting numbers for further calculations.
 * Created by: Vedant Patel
*/

// Libraries
#include <iostream>
/**
 * @purpose: To sort the numbers in an array.
 * 
 * @param: int - for which we need to sort the array.
 * @preconditions: N/A
 * @return: N/A
 * @sideeffect: N/A
*/
using namespace std;
void sorting(int arr[], int n)
{
	int temp;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}