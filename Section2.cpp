/**
* ConsoleApplication1.cpp : This file contains the main() function. 
* Purpose: To Test the functions.
* Developed by: Vedant Patel
 * Date of creation: 13/10/2021
*/

// Importing necessary libraries

#include <iostream>
#include <cmath>
#include <time.h>
#include "sin_cos.h"
using namespace std;

/**
    This function compare float values upto the floating point numbers
    passed as epsilon, the default value of epsilon is 0.01
    which mean it compares upto 2 floating point digits
    @param x First float value
    @param y Second float value
    @param epsilon Precision upto floating point digits
    @return True if Equal else False
*/
bool compare_float(float x, float y, float epsilon = 0.01f)
{
    if (fabs(x - y) < epsilon)
        return true; //they are same
    else
        return false; //they are not same
}

/**
 * @info:
 * Contains all the main logic for the given program and is executed first before any other functions.
 * 
 * @explaination:
 * 	- this function gives the values to be tested by calling the functions from header file.
 * 
 * @preconditions:
 * - N/A
 * 
 * @param: - N/A
 * @return: - float - for normal execution.
 * 
 * @sideeffects: Either the test case is passed or failed.
 */

int main()
{

    /*
        As sin and cos function returns the ten-thousandth of
        the original value so we will divide the actual
        value with 10000 to get the original value
    */

    /**
        Testing Strategy: We will test each independent path of our functions
        one by one and then compare the value returned (actual) with the
        expected value as per our test case.

    */

    // TEST 1: Checking for negative value for path x<0
    // TestCase: Expected value of sin(-25) is -0.4225
    float actual = sin(-25) / 10000.0;
    float expected = -0.4225;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 1 PASSED. sin(-25) = -0.4225" << endl;
    else
        cout << "Test 1 FAILED. sin(-25) != -0.4225 As sin(-25) = " << actual << endl;

    // TEST 2: Checking in between value for path x>=0 && x<=45
    // TestCase: Expected value of sin(30) is 0.5
    actual = sin(30) / 10000.0;
    expected = 0.5;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 2 PASSED. sin(30) = 0.5" << endl;
    else
        cout << "Test 2 FAILED. sin(30) != 0.5 As sin(30) = " << actual << endl;

    // TEST 3: Checking for boundary value 0 for path x>=0 && x<=45
    // TestCase: Expected value of sin(0) is 0
    actual = sin(0) / 10000.0;
    expected = 0;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 3 PASSED. sin(0) = 0" << endl;
    else
        cout << "Test 3 FAILED. sin(0) != 0 As sin(0) = " << actual << endl;

    // TEST 4: Checking boundary value 45 for path x>=0 && x<=45
    // TestCase: Expected value of sin(45) is 0.7071
    actual = sin(45) / 10000.0;
    expected = 0.7071;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 4 PASSED. sin(45) = 0.7071" << endl;
    else
        cout << "Test 4 FAILED. sin(45) != 0.7071 As sin(45) = " << actual << endl;

    // TEST 5: Checking in between value for path x>=45 && x<=90
    // TestCase: Expected value of sin(60) is 0.8660
    actual = sin(60) / 10000.0;
    expected = 0.8660;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 5 PASSED. sin(60) = 0.8660" << endl;
    else
        cout << "Test 5 FAILED. sin(60) != 0.8660 As sin(60) = " << actual << endl;

    // TEST 6: Checking for boundary value 90 for path x>=45 && x<=90
    // TestCase: Expected value of sin(90) is 1
    actual = sin(90) / 10000.0;
    expected = 1;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 6 PASSED. sin(90) = 1" << endl;
    else
        cout << "Test 6 FAILED. sin(90) != 1 As sin(90) = " << actual << endl;

    // TEST 7: Checking in between value for path x>=90 && x<=180
    // TestCase: Expected value of sin(130) is 0.7660
    actual = sin(130) / 10000.0;
    expected = 0.7660;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 7 PASSED. sin(130) = 0.7660" << endl;
    else
        cout << "Test 7 FAILED. sin(130) != 0.7660 As sin(130) = " << actual << endl;

    // TEST 8: Checking boundary value for path x>=90 && x<=180
    // TestCase: Expected value of sin(180) is 0
    actual = sin(180) / 10000.0;
    expected = 0;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 8 PASSED. sin(180) = 0" << endl;
    else
        cout << "Test 8 FAILED. sin(180) != 0.7660 As sin(180) = " << actual << endl;

    // TEST 9: Checking for else path
    // TestCase: Expected value of sin(250) is -0.9396
    actual = sin(250) / 10000.0;
    expected = -0.9396;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 9 PASSED. sin(250) = -0.9396" << endl;
    else
        cout << "Test 9 FAILED. sin(250) != -0.9396 As sin(250) = " << actual << endl;

    // TEST 10: Checking for else path
    // TestCase: Expected value of cos(250) is -0.3419
    actual = cos(250) / 10000.0;
    expected = -0.9396;
    if (compare_float(actual, expected, 0.001f))
        cout << "Test 10 PASSED. cos(250) = -0.9396" << endl;
    else
        cout << "Test 10 FAILED. cos(250) != -0.9396 As cos(250) = " << actual << endl;
}
