#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements.
 * @n: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (n)
	{
		if (!n->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %p\n" n->len, 
					n->str);
		n = n-> next;

		p++;

	}
	return (p);
}

