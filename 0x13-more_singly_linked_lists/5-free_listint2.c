#include "lists.h"

/**
* free_listint2 - free memory previously allocated to a struct list
* @head: double pointer to the first member of a singly linked list
*/

void free_listint2(listint_t **head)

{

listint_t *temp;

if (head == NULL)
return;

while (*head)
{
if ((*head)->next)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
else
{
free(*head);
*head = NULL;
}
}
}
