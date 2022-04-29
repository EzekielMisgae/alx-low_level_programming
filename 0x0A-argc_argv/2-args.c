#include "main.h"

/**
* main: listing the arguments
* @argc: number of arguments passed on excuted
* @argv: arguments passed when excuted
* Return: 0 on successfull completion
*/

int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
