#include "lists.h"

/**
* pop_listint - return data from and then delete memory allocated
* @head: double pointer to the first member of a singly linked list
* Return: int value of node deleted from start of list
*/

int pop_listint(listint_t **head)

{
listint_t *old_h;
int num;
if (!head)
return (0);
if (*head)
{
old_h = *head;
*head = (*head)->next;
num = old_h->n;
free(old_h);
return (num);
}
else
return (0);
}
