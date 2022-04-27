#include "main.h"

/**
* _puts_recursion - print string followed by a new line
* @s: printed string
*
*/

void MyPrint(const char *str
{
  int len = strlen(s) + 1;
  char *temp = alloca(len);

  int i;
  for (i = 0; i < len; i++)
  {
    char ch = str[i];
    if (ch == '\n')
      break;
    temp[i] = ch;
  }

  temp[i] = 0;

  puts(temp);
}
