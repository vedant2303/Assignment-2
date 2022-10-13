#include <bits/stdtr1c++.h>
using namespace std;
/** These functions compute the sine and cosine of an angle
    expressed in degrees. The result will be
    an integer representing the sine or cosine as
    ten-thousandths. For example, a result of 7071 represents
    7071e-4 or 0.7071.
*/

// Forward declarations
int sin0to45(int);
int sin45to90(int);
int polyEval(int, int[], int);

/** Compute the sine of an angle in degrees.
    @param x The angle in degrees
    @return The sine of x
*/
int sin(int x)
{
  if (x < 0)
  {
    x = -x;
  }
  x = x % 360;
  if (0 <= x && x <= 45)
  {
    return sin0to45(x);
  }
  else if (45 <= x && x <= 90)
  {
    return sin45to90(x);
  }
  else if (90 <= x && x <= 180)
  {
    return sin(180 - x);
  }
  else
  {
    return -sin(x - 180);
  }
}

/** Compute the cosine of an angle in degrees.
    @param x The angle in degrees
    @return The cosine of x
*/
int cos(int x)
{
  return sin(x + 90);
}

/** Compute the sine of an angle in degrees
    between 0 and 45.
    pre: 0 <= x < 45
    @param x The angle
    @return The sine of x
*/
int sin0to45(int x)
{
  // Code to compute sin(x) for x between 0 and 45 degrees
  // Evaluate a polynomial optimized for this range.
  int coef[] = {
      -81, -277, 1747900, -1600};
  return polyEval(x, coef, 4) / 10000;
}

/** Compute the sine of an angle in degrees
    between 45 and 90.
    pre: 45 <= x <= 90
    @param x The angle
    @return The sine of x
*/
int sin45to90(int x)
{
  // Code to compute sin(x) for x between 45 and 90 degrees
  // Evaluate a polynomial optimized for this range.
  int coef[] = {
      336, -161420, 75484, 999960000};
  return polyEval(90 - x, coef, 4) / 100000;
}

/** Function to evaluate a polynomial
    @param x The point at which the polynomial is to be evaulated
    @param coef The array of coefficients
    @param n The number of coefficients (degree + 1)
    @return x^n-1*coef[0] + x^n-2*coef[1] + ... x*coef[n-2] + coef[n-1]
*/
int polyEval(int x, int coef[], int n)
{
  int result = 0;
  for (int i = 0; i < n; i++)
  {
    result *= x;
    result += coef[i];
  }
  return result;
}
/**
 * bool checkResult(int original, int expected)
 * Module: Section 2
 * Author: Vedant Patel
 * Date:   12/10/2022
 * Purpose: To check the original and the expected result are same or not.
 *
 * Function   : checkResult
 *
 * Parameters :
 *           1) original : Original value that is checked with expected value.
 *           2) expected : Expected value that is checked with Original value.
 *
 * Output :
 *         result : bool - For Example: false
 *
 * Example of Usage:
 *
 *   bool result=checkResult(2000,2000);
 *
 */
bool checkResult(int original, int expected)
{
  if (original != expected)
  {
    return true;
  }
  else
    return false;
}
/**
 * void printTest(int i)
 * Module: Section 2
 * Author: Vedant Patel
 * Date:   12/10/2022
 * Purpose: To print the test cases on the console.
 *
 * Function   : printTest
 *
 * Parameters :
 *           1) i : Test case that must be printed on the console.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *   printTest(1);
 *
 */
void printTest(int i)
{
  cout << "Test Case : " << i;
}

/**
 * void printLine()
 * Module: Section 2
 * Author: Vedant Patel
 * Date:   12/10/2022
 * Purpose: To print the line on the console between 2 test cases.
 *
 * Function   : printLine
 *
 * Parameters : N/A
 *          
 * Output : N/A
 *
 * Example of Usage:
 *
 *   printLine();
 *
 */
void printLine()
{
  cout<<"----------------------------------"<<endl;
}

/**
 * void display(int degree, int expected, int actual)
 * Module: Section 2
 * Author: Vedant Patel
 * Date:   12/10/2022
 * Purpose: To print all the values on the console.
 *
 * Function   : display
 *
 * Parameters :
 *           1) degree   : degree to be calculated.
 *           2) expected : Expected value that to be checked with the actual value.
 *           3) actual   : Actual value that gets calculated using the sin and cos function.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *   display(10,4322,4322);
 *
 */
void display(int degree, int expected, int actual)
{
  // Check Result and see if there is any error in it.
  bool error = checkResult(expected, actual);
  cout << endl;
  // print all the values on the console.
  cout<<"Degree   : "<<degree<<endl;
  cout<<"Expected : "<<expected<<endl;
  cout<<"Original : "<<actual<<endl;
  cout<<"Error    : "<<error<<endl;
  cout << endl;
  printLine();
}
/**
 * void printSinResult(int degree, int expected)
 * Module: Section 2
 * Author: Vedant Patel
 * Date:   12/10/2022
 * Purpose: To calculate the actual value and compare and print on the console.
 *
 * Function   : printSinResult
 *
 * Parameters :
 *           1) degree   : degree to be calculated.
 *           2) expected : Expected value that to be checked with the actual value.
 *            
 * Output : N/A
 *
 * Example of Usage:
 *
 *   printSinResult(10,4322);
 *
 */
void printSinResult(int degree, int expected)
{
  int result = sin(degree);
  display(degree, expected, result);
}
/**
 * void printCosResult(int degree, int expected)
 * Module: Section 2
 * Author: Vedant Patel
 * Date:   12/10/2022
 * Purpose: To calculate the actual value and compare and print on the console.
 *
 * Function   : printCosResult
 *
 * Parameters :
 *           1) degree   : degree to be calculated.
 *           2) expected : Expected value that to be checked with the actual value.
 *            
 * Output : N/A
 *
 * Example of Usage:
 *
 *   printCosResult(10,4322);
 *
 */
void printCosResult(int degree, int expected)
{
  int result = cos(degree);
  display(degree, expected, result);
}
