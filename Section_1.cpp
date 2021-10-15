/**
* ConsoleApplication1.cpp : This file contains the main() function. 
* Purpose: To calculate the execution time of the 10 arrays of 3 different sizes which are ordered in ascending, reverse and randomly.
* Developed by: Vedant Patel
* Created on: 10/10/2021
*/

// Importing necessary libraries

#include <iostream>
#include <time.h>
#include "Section1.h"
using namespace std;

/**
 * @info:
 * Contains all the main logic for the given program and is executed first before any other functions.
 * 
 * @explaination:
 * 	- this function calculates the time to execute all 10 arrays of different sizes having 3 different array orderings (random order, ascending order, and inverse order).
 * 
 * @preconditions:
 * - N/A
 * 
 * @param: - N/A
 * @return: - int - 0 as default value for normal execution.
 * 
 * @sideeffects: N/A
 */
int main()
{

    int i, j, n, arr1[100000], timeTaken[30], temp = 0, MAX = 100000;
    for (int i = 1; i <= 3; i++)
    {
        //cout<<"Enter the inputs in array ";
        srand(time(0));
        int random = (rand() % 9);
        //Random array

        cout << "Enter MAX for Random order"<< "\n";
        cin >> MAX;
        for (int i = 0; i < 10; i++)
        {
            for (int i = 0; i < MAX; i++)
            {
                arr1[i] = random;
            }
            time_t start, end;
            time(&start);
            sorting(arr1, MAX);
            time(&end);
            cout << "----------------------------------------------"<< "\n";
            cout << "Time taken to sort randomly stored values: ";
            cout << double(end - start) << " |"<< "\t";
            cout << "\n";
        }
        cout << "----------------------------------------------"<< "\n";
        //Asc array
        cout << "Enter MAX for ascending order"<< "\n";
        cin >> MAX;
        for (int i = 0; i < 10; i++)
        {
            for (int i = 0; i < MAX; i++)
            {
                arr1[i] = i;
            }
            time_t start, end;
            time(&start);
            sorting(arr1, MAX);
            time(&end);
            cout << "----------------------------------------------------------------"<< "\n";
            cout << "Time taken to sort an array having ascending ordered values: ";
            cout << double(end - start) << " |"<< "\t";
            cout << "\n";
        }
        cout << "----------------------------------------------------------------"<< "\n";
        //Reverse Array
        cout << "Enter MAX for reverse order"<< "\n";
        cin >> MAX;
        int val = MAX;
        for (int i = 0; i < 10; i++)
        {
            for (int i = 0; i < MAX; i++)
            {
                arr1[i] = val;
                val--;
            }
            time_t start, end;
            time(&start);
            sorting(arr1, MAX);
            time(&end);
            cout << "--------------------------------------------------------------"<< "\n";
            cout << "Time taken to sort an array having reverse ordered values: ";
            cout << double(end - start) << " |"<< "\t";
            cout << "\n";
        }
        cout << "--------------------------------------------------------------"<< "\n";
    }
}