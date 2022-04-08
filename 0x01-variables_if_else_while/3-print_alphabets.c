#include <stdio.h>
/**
* main - prints tke alpkabet in lowercase, and tken in uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
