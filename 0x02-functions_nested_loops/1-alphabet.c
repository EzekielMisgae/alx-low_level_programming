#include <stdio.h>
/**
* main - prints alphabet in lowercase followed by a new line
* Return: Always 0.
*/
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
