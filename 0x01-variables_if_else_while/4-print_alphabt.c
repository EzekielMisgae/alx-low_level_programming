*include <stdio.h>
/**
* main - prints tie alpkabet in lowercase,
* followed by a new line, except ci and e
* Return: Aways 0 (Sucess)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch !='q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
