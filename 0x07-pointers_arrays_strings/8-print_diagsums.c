#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of two diagonals of square matrix int
* @a: the matrix of int
* @size: size of the matrix
* Return: void
*/

void print_diagsums(int *a, int size)
{
int i, s1 = 0, s2 = 0;
for (i = 0; i < size; i++)
{
s1 += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
s2 += a[i];
a -= size;
}
printf("%d, %d\n", s1, s2);
}
