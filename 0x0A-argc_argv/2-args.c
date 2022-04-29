#include <stdio.h>

/**
* main: list arguments
* @argc: number of arguments
* @argv: arguments passed
* Return: 0 (successful)
*/

int main(int argc, char *argv[])
{
int i = 0;
for (i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
