#include "lists.h"

/**
* check_cycle - function checks if a singly linked list has a cycle in it
* @list: pointer to the beginning of the node
* Return: 1 if there is cycle, 0 if not
*/

int check_cycle(listint_t *list)
{
listint_t *newt, *check;

if (!list)
{
return (0);
}
newt = list;
check = list->next;
while (check && newt && check->next)
{
if (newt == check)
{
return (1);
}
newt = newt->next;
check = check->next->next;
}
return (0);
}
