#include "lists.h"

/**
* sum_listint - returns sum of all data of linked list
* @head: pointer to the first member of a singly linked list of structs
* Return: sum of all the 'int n' elements of each struct in linked list
*/

int sum_listint(listint_t *head)

{

litint_t *temp = head;
int sum = 0;

if (!head)
return (0);

while (temp->next)
{
sum += temp->n;
temp = temp->next;
}
if (!temp->next)
sum += temp->n;
return (sum);

}
