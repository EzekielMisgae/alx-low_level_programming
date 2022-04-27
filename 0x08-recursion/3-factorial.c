#include "main.h"
#include <stdio.h>
/**
* factorial - calculate factorial of a given number
* @n: number to be calculated the factorial
* Return: factorial of a number
*/

int factorial(int n)
{
int n_factorial;
if (n < 0)
return (-1);
else if (n == 0)
return (1);
n_factorial = factorial(n - 1);
return (n * n_factorial);
}
