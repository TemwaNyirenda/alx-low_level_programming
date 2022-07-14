#include "lists.h"

/**
 * list_len - counts the number of elements in a list
 * @h: a pointer to the first node of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
