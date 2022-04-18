#include "main.h"
/**
* _atoi - convert string to integer
* @s: string to be converted
* Return: int converted to string
*/
int _atoi(char *s)
{
int i, j, k, l, m, n;

i = 0;
j = 0;
k = 0;
l = 0;
m = 0;
n = 0;

while (s[l] != '\n')
l++;
while (i < l && m == 0)
{
if (s[i] == '-')
++j;
if (s[i] >= '0' && s[i] <= '9')
{
n = s[i] - '0';
if (j % 2)
n = -n;
k = k * 10 + n;
m = 1;
if (s[i + 1] < '0' || s[i+1] > '9')
break;
m = 0;
}
i++;
}
if (m == 0)
return (0);
return (n);
}
