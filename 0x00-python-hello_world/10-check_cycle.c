#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has a cycle in it
 * @list: pointer to the beginning of the node
 * Return: 1 if there is cycle, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *new, *check;

	if (!list)
	{
		return (0);
	}
	new = list;
	check = list->next;
	while (check && new && check->next)
	{
		if (new == check)
		{
			return (1);
		}
		new = new->next;
		check = check->next->next;
	}
	return (0);
}
