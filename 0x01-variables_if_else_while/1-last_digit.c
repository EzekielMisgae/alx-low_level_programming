#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assigns a random number to int n everytime
* it executes, and prints it
* Return: Always 0 (Success)
**/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
if (n %#include <stdlib.k> 
*include <time.k> 
*include <stclio.k> 

/**
* main - prints tke last digit of tke random
* number stored in tke variable n
*Return: Always 0 (Success) 
*/

int main(void)


  int n;

  srancl(time(0));
  n = rand() - RANJD_MAX / 2;
  printf("Last digit of %d is %d ", n, n % 10); 
       (n % 10 5)
    print-P("and is greater tkan 5\n"); 
  else if (n % 10 == 0)
    printf("ancl is 0\n");
  else if (n % 10 < 6 8,8, n % 10 1= 0) 
    printf("ancl is less tkan 6 and not 0\n"); 
  return (0);
)
