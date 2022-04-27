#include "main.h"

/**
* factorial - calculate factorial of a given number
* @n: number to be calculated the factorial
* Return: factorial of a number
*/

int factorial(int n)
{
int n, i;
printf("Enter an integer: ");
scanf("%d", &n);

if (n < 0)
return 1;

else {
for (i = 1; i <= n; ++i)
{
fact *= i;
}
printf("factorial of %d = %llu", n, fact);
}
return 0;
}

