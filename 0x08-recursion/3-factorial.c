#include "main.h"
#include <stdio.h>
/**
* factorial - calculate factorial of a given number
* @n: number to be calculated the factorial
* Return: factorial of a number
*/

int factorial(int n)
{
int n, fact=1, number;
printf("Enter a number: ");
scanf("%d", &number);
for(n = 1; n <= number; n++)
{
factorial = factorial * n;
}
printf("Factorial of %d is: %d", number, factorial);
return 0;
}
